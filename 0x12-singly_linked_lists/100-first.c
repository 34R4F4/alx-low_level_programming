#iclude "lists.h"

void print_constructor(void) __attribute__((constructor))
/**
 * print_constructor - execute before main
 *
 * Return: v
 */

void print_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
