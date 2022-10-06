#include "main.h"
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = strlen(s1) + n + 1, i = 0;
 	unsigned int j = 0;
	char *res = malloc(x);

	if (res == NULL)
		return (NULL);

	while (s1 != NULL && s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (n != 0 && s2 != NULL && j < n && s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
