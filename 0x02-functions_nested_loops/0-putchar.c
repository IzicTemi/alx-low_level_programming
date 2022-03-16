#include "holberton.h"

/**
 * Print _putchar, followed by an new line
 *
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
 */
void _putchar(void)
{
	char str1[12] = "_putchar";
	printf("%s\n", str1);

	return 0;
}
