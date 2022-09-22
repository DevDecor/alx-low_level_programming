#include "main.h"

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 'Z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
