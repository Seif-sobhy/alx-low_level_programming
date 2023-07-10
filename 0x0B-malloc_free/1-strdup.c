#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
*/

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, length;

	if (str == 0 || newstr == 0)
	{
	return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
	length++;
	}

	newstr = malloc(sizeof(char) * (length + 1));

	for (i = 0; i < length; i++)
	{
	newstr[i] = str[i];
	}

	newstr[length] = '\0';

	return (newstr);

}
