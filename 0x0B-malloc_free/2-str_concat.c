#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *conc;
	int i, j;

	if (!s1)
		s1 = "";
	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);

	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		conc[i] = s1[i];
	}
	
	i = 0;
	for (j = l1 + 1; s2[i] != '\0'; j++)
	{
		conc[j] = s2[i];
		i++;
	}

	l1 = _strlen(conc);

	conc[l1 + 1] = '\0';


	return (conc);
