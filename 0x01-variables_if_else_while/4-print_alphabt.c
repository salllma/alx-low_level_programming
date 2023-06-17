#include<stdio.h>
#include<string.h>

/**
 * main - entry point to a function that print the alphabet in lowercase
 * followed by a new line without print q & e
 * Return: Always 0 on success
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
	putchar(i);
	}

	putchar('\n');


	return (0);
}
