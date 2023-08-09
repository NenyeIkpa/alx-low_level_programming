#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <errno.h>

void display_elf_header_info(const Elf64_Ehdr *header);

/**
 * print_error_and_exit - prints error and exits
 *
 * @msg: error message to be printed
 *
 */

void print_error_and_exit(const char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(98);
}

/**
 * display_elf_header_info - displays elf header information
 *
 * @header: the header file of an ELF
 *
 */

void display_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:   ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}

	printf("Data:    ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI:  ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		default:
			printf("Other\n");
			break;
	}

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type:    %d\n", header->e_type);

	printf("Entry point address: %ld\n", (size_t)header->e_entry);
}

/**
 * main - checks the code
 *
 * @argc: argument count
 * @argv: list of arg variables
 *
 * Return: int
 *
 */

int main(int argc, char *argv[])
{
	const char *elf_filename;
	Elf64_Ehdr header;
	ssize_t bytes_read;
	int fd;

	if (argc != 2)
		print_error_and_exit("Usage: elf_header elf_filename");
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
		print_error_and_exit(strerror(errno));
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
		print_error_and_exit("Error reading ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_and_exit("Not an ELF file");
	display_elf_header_info(&header);
	if (close(fd) == -1)
		print_error_and_exit(strerror(errno));
	return (0);
}
