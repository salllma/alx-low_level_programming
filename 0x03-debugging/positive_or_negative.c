#include "main.h"
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

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("0 is zero\n");
}
