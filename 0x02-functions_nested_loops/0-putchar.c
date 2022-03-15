#include "main.h"

/**
 * main - Entry point
 * prints "_putchar" followed by a new line
 * the program prints "_putchar followed by a new line
 * Return: 0
 */



int main(void)

{

	char ch[] = "_putchar";

	int i = 0;



	while (ch[i] != '\0')

	{

		_putchar(ch[i]);

		i++;

	}

	_putchar('\n');



	return (0);

}
