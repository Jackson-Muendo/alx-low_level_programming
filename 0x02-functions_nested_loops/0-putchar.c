#include "main.h"

/**
 * main - Entry point
 * prints "_putchar" followed by a new line
 * the program prints "_putchar
 * Return: 0
 */



int main(void)

{

	char ch = "_putchar";

	int i = 0;



	while (ch != '\0')

	{

		_putchar(ch);

		i++;

	}

	_putchar('\n');



	return (0);

}
