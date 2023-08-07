#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

char _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif