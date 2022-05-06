#include "main.h"

/**
  * malloc_checked - Allocate memory 
  * @b: size of memory to be allocated
  * Return: A pointer to allocated memoru
  */


void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc (b);

if (ptr == NULL)
	return (98);
else
	return (prt);

}
