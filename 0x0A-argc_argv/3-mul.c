#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: the number of arguments passed to the program
 * @argv: the array of string containing the argument passed to the program
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, score;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	score = num1 * num2;
	printf("%d\n", score);
	return (0);
}