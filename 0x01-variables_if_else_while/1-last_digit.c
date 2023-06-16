#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point to a c program to print a string
 * @n - variable store diffrent digit
 *
 * Return: always (0) on success
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if ((last_digit >= 6))
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if ((last_digit == 0))
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);


	return (0);
}