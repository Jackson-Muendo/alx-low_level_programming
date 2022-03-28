#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * @s: the string to evaluate
 * @accept: estring of reference
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			if (!*s)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}
