#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function writes the alphabet  in lowercase,
 * 10 times followed by a new line.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
	}

}

