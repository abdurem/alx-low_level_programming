#include "main.h"
#include <stdio.h>

/**
  * cap_string - Capitalizes every letter coming after a space, tabulation,
  * new line, ,, ;, ., !, ?, ", (, ), {, and } in @s
  * @s: the string to be capitalized
  *
  * Return: @s, the string, capitalized
  */

char *cap_string(char *s)
{
	/* @c: the characters that make the next letter eligible to be capitalized */
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')',
		  '{', '}'};
	int len = 0;
	int i;
	int k;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	for (i = 0; i < len; i++)
	{
		for (k = 0; k < 14; k++)
		{
			if (s[i] == c[k] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				/*printf("s[i] is \"%c\" and s[i+1] is \"%c\"\n", s[i], s[i+1]);*/
				s[i + 1] = (char) s[i + 1] - 32;
			}
		}
	}

	return (s);

}
