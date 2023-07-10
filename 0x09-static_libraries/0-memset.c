#include"main.h"

/**
* _memset - a program fills the first n bytes of the memory area.
*
* @s : string
* @b : the replaced char
* @n : length filled in the memory
*
* Return: character value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 1)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}

