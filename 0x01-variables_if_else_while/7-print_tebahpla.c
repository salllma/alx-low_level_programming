#include<stdio.h>
#include<string.h>

/**
 * main - entry point to a function that print the alphabet
 * in lowercase in reverse
 *
 * Return: Always 0 on success
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);



	putchar('\n');


	return (0);
}
