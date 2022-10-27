#include "main.h"
/**
 * binary_to_uint - converts a binary string to base 10
 * @b: pointer to the binary string
 * Return: The binary form of the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i = 0, sum = 0;

	if (b == NULL || b[0] == '\0')
		return (0);
	len = strlen(b) - 1;
	while (*b != '\0')
	{
		if (*b == '1')
			sum += _pow((2), (len - i));
		else if (*b != '0')
			return (0);
		i++;
		b++;
	}
	return (sum);
}
/**
 * _pow - Power function
 * @x: base number
 * @y: power
 * Return: x^y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	int res = x;

	if (y == 0)
		return (1);
	while (y > 1)
	{
		res *= x;
		y--;
	}
	return (res);

}
