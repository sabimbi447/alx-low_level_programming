#include "main.h"

char *create_array(unsigned int size, char c)
{	
	char *ptr;
	unsigned int position;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(c));

	if (ptr == 0)
		return (NULL);
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
