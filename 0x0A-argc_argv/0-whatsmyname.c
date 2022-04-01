#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: an array consisting arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
