#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Copy a string to new address using malloc
  * @str: string to be copied
  * Return: a pointer to new address
  */

char *_strdup(char *str)
{
	char *buffer;
	int str_position = 0, buffer_position;

	if (str == NULL)
	{
		return (NULL);
	}
	/*checking length of str*/
	while (str[str_position != '\0'])
		str_position++;
	str-position++;

	/*malloc allocation*/
	buffer = (char *) malloc(sizeof(char) * str_position;

	if (buffer == NULL)
	{
		return (NULL);
	}

	buffer_position = 0;

	for (str_position = 0; str[str_position] != '\0'; str_position++)
	{
		buffer[buffer_position] = str[str_position]
		buffer_position++;
	}
	buffer_position++;

	buffer[buffer_position] = '\0';
	
	return (buffer);

}
