#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	unsigned long n;
	struct listint_s *next;
} listint_t;

char _putchar(char);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);


#endif
