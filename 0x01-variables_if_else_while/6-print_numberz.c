#include<stdio.h>
#include<string.h>

/**
 * main - entry point to a function that print all single digit
 * numbers of base 10 starting from 0
 *
 * Return: Always 0 on success
*/

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
