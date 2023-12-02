#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - it concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer value
 *
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i = 0, j = 0, concat = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	concat = i + n;
	str = malloc((concat + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		str[a] = s1[a];
	for (b = 0; b < n; b++)
		str[i + a] = s2[a];
	str[concat] = '\0';
	return (str);
}
