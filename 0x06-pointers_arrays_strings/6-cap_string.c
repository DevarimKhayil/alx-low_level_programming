#include "main.h"

/**
  * cap_string - The main  function
  * @str: Function parameter
  * Return: char
  */
char *cap_string(char *str)
{
	int count = 0;

	while (str[count])
	{
	while (!(str[count] >= 'a' && str[count] <= 'z'))
		count++;
	if (str[count - 1] == ' ' ||
	str[count - 1] == '\t' ||
	str[count - 1] == '\n' ||
	str[count - 1] == ',' ||
	str[count - 1] == ';' ||
	str[count - 1] == '.' ||
	str[count - 1] == '!' ||
	str[count - 1] == '?' ||
	str[count - 1] == '"' ||
	str[count - 1] == '(' ||
	str[count - 1] == ')' ||
	str[count - 1] == '{' ||
	str[count - 1] == '}' ||
	count == 0)
	str[count] -= 32;
	count++;
	}
	return (str);
}


