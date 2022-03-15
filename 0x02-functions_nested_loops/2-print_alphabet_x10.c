#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet 10 times
 *
 * Description: main header
 * the program - "print_alphabet_x10 - print all alphabet 10 times
 * Return: On success 1.
 */
void print_alphabet_x10(void)

{

	char i;

	int j;



	j = 0;

	while (j < 10)

	{

		i = 'a';

		while (i <= 'z')

		{

			_putchar(i);

			i++;

		}

		_putchar('\n');

		j++;

	}



}
