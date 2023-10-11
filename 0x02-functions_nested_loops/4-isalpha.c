#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: parameter
* Return: 1 (if alpha) 0 (false)
*/

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
