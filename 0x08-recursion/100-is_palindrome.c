#include <stdio.h>
#include "main.h"
/**
 * get_length - Write a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: Palindrome
 *
 * Return: Always 0
 */
int get_length(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + get_length(s + 1));
}
/**
 * is_palindrome - Write a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: Entry string
 *
 * Return: Always 0
 */
int is_palindrome(char *s)
{
int length = get_length(s);
return (check_palindrome(s, 0, length - 1));
}
/**
 * check_palindrome - Function to help check the string
 * @s: The input string
 * @start: Starting
 * @end: Ending
 *
 * Return: always 0
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (check_palindrome(s, start + 1, end - 1));
}
