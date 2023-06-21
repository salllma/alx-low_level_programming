#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c : character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
