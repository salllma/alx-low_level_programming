#include <stdio.h>
#include "main.h"

/**
 * main - entry point to a program that print
 * a _putchar string
 *
 * Return: always 0 on success
*/

int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}

	_putchar('\n');

	return (0);
}

