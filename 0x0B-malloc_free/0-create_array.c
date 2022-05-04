#include "main.h"

/**
  * create_array - array to create a string of character
  * @size: number elements array
  * @c: char
  * Return: returns a pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	
	/*Define values with malloc*/
	ptr = (char *) malloc(size * sizeof(c));

	if (ptr == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /* While for array*/
		{
			*(ptr + position) = c;
			position++;
		}

		return (ptr);
	}


}
