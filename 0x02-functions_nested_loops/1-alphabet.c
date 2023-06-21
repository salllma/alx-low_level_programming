#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - writes the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');

	return (0);
}

