#include"main.h"
/*
* _isupper -  function Checks for uppercase character
* Return: 1 if uppercase, or 0 for non-upper
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
		return (0);
}
