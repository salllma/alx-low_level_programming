#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of a program to print a phrase
 * prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * without using printf or puts
 *
 * Return: Always 1
 */

int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
