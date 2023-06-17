#include <stdio.h>

/**
 * main - Entry point a program that prints combinations
 * of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int f;

	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
			for (f = j + 1; j <= 9; f++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(f + '0');

				if (f != 7 || i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');

	return (0);
}
