#include<stdio.h>
#include<string.h>

/**
 * main - entry point to a function that print the alphabet in lowercase
 *
 * Return: Always 0 on success
*/

int main(void)
{
	int i = 0;

	for (i = 97; i <= 122; ++i)
		putchar("%c", i);


	return (0);
}
