#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - Helper function to count the number of words in a string
 * @s: String to evaluate
 * * Return: Number of words
 */
int count_word(char *s)
{
int count = 0;
int is_word = 0;
while (*s)
{
if (*s == ' ')
{
is_word = 0;
}
else if (is_word == 0)
{
is_word = 1;
count++;
}
s++;
}
return (count);
}
/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings (Success), or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *word_start;
int i, words, count, word_len;
if (str == NULL || *str == '\0')
	return (NULL);
words = count_word(str);
if (words == 0)
	return (NULL);
matrix = malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
	return (NULL);
count = 0;
while (*str)
{
if (*str == ' ')
	str++;
else
{
word_start = str;
while (*str != ' ' && *str != '\0')
	str++;
word_len = str - word_start;
matrix[count] = malloc(sizeof(char) * (word_len + 1));
if (matrix[count] == NULL)
{
for (i = 0; i < count; i++)
	free(matrix[i]);
free(matrix);
return (NULL);
}
strncpy(matrix[count], word_start, word_len);
matrix[count][word_len] = '\0';
count++;
}
}
matrix[count] = NULL;
return (matrix);
}
