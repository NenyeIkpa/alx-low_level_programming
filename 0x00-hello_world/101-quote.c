#include <unistd.h>
/**
 *main - entry point
 *no arguments
 *
 *Description: prints a string using write function.
 *Return: main() has a return type of int. returns 1.
 */
int main(void) 
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 59);
    return (1);
}
