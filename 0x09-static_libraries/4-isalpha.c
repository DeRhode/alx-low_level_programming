#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * @c: Representing the input
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
