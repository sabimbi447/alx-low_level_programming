#include <stdio.h>

/**
  * main - print all arguments received
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;
	if (argc > 0)
	{
		for (i = 0; i <= argc -1; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	
	else
		printf("There only one argument");

	return (0);
}
