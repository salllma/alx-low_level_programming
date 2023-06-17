#include<stdio.h>
#include<string.h>

/**
 * main - entry point to a function that print the alphabet in lowercase
 *
 * Return: Always 0 on success
*/

int main(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	

	for (i = 'A'; i <= 'Z'; i++)
	putchar(i);
	

	putchar('\n');


	return (0);
}
