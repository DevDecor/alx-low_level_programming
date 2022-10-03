#include <stdlib.h>
/**
 * create_array - Creates an array
 * @size: size of the array
 * @c: character to filll the array
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(c) * size);

	while (size != 0)
	{
		str[size] = c;
		size--;
	}
	str[size] = c;
	return (str);
}
