#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s: string s
 * @accept: take this bytes
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int i;
	int j;

	n = 0;
	i = 0;
	while ((s[i] >= 'a' && s[i] <= 'z') ||
	       (s[i] >= 'A' && s[i] <= 'Z'))
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
			}
			j++;
		}
		i++;
	}
	return (n);
}
