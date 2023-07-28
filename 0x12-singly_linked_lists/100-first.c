#include "lists.h"

/**
 * beforeMain - function that prints before main
 *
 * DescriptionApply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 */
void beforeMain(void) __attribute__ ((constructor));

void beforeMain(void)
{
	printf
		("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
