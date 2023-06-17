#include<stdio.h>

/**
 * main - entry point to a function that print all single digit
 * numbers of base 10 starting from 0
 *
 * Return: Always 0 on success
*/

int main(void)
{
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
	printf("%d", i);
	}

	printf("\n");

	return (0);
}
