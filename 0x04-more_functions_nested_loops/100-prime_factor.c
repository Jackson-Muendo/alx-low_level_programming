#include <stdio.h>



/**
 * main - prints the largest prime factor of the number
 * the program - "prints the largest prime factor of the number
 * Return: always 0
 */



int main(void)



{

	long int num = 612852475143;

	long int fact = 2;



	while (num != 1)

	{

		if (num % fact == 0)

		{

			num = num / fact;

		}

		else

		{

			fact++;

		}

	}

	printf("%li\n", fact);

	return (0);

}
