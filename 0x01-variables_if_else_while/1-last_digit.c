#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main- Print the last digit of a random digit
 *	  print the digit when is greater than 5
 *	  print the digit when is 0
 *	  print the digit when is less than 6 and not 0.
 * Return: 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	
printf("Last digit of %d is %d %s\n", n, n % 10, 
((n % 10) == 0) ? "and is greater than 5"
: (((n % 10) > 5) ? "and is greater than 5
: "and is less than 6 and not 0));

return (0);
}
