#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there  */

/**
 * main -print if number is greater than 5,is 0,is less than 6 and not 0
 *
 * Description: using main function
 * the program prints "Programming is greater than 5,0 or less than 6 and not 0
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6; l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
Return(0);
}
