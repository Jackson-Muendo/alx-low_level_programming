#include "holberton.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 * @s: thw array
 * @b: constant
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (i > n)
		{
			s[i] = '\0';
		}
		s[i] = b;
		i++;
	}
	return (s);
}
