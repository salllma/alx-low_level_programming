#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point in the program generate a random
 * number and check if the number is positive
 * negative or zero
 *
 * Return: always 0 on success
 */

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");

	return (0);
}
