#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{

	int a = 972;
	int b = -98;
	int c = 0;

	int largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
