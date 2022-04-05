#include "main.h"
#include <stdlib.h>

/**
 * _strdup - give a pointer that point to a copy of string
 * @str: the string to copy
 * Return: NULL or p
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int j;
	int leng;

	if (str == NULL)
	{
		return (NULL);
	}

	leng = 0;
	i = 0;
	while (str[i] != '\0')
	{
		leng++;
		i++;
	}

	p = malloc(sizeof(char) * (leng + 1));
	if (p != '\0')
	{
		j = 0;
		while (j < leng)
		{
			p[j] = str[j];
			j++;
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
	free(p);
}
