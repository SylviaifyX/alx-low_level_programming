#include <stdio.h>

/**
* main - program that prints argument passed in it
* @argc: number of command line argument given
* @argv: array that contains command line argument
*
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
