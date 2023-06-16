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
	int la_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	la_digit = n % 10;

	if ((la_digit >= 6))
		printf("Last digit of %d is %d and is greater than 5\n", n, la_digit);
	else if ((la_digit == 0))
		printf("Last digit of %d is %d and is 0\n", n, la_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la_digit);


	return (0);
}
