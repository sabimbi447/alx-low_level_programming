#include "main.h"

/**
  * 1-strncat - concatenate two strings
  * @dest: A pointer to a character that will be changed
  * @src: A pointer to a character that will also be changed
  * @n: Number of characters to concatenate
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0; 

while ( dest[i] != '\0')
{
	i++;
}

j = 0;
for (; src[j] != 0 && j <= n; j++)
{
	dest[i] = src[j];
	i++;
}

dest[i] = '\0';

return (dest);
}

