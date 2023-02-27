#include "main.h"
/**
 * _strien - returns the lenght of a string
 * @s: string
 * Return: lenghth
 */
int _strien(char *s)
{
	int longi = 0; 

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
