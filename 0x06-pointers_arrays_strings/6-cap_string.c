#include "main.h"

/**
 * *cap_string - capitalize words in a string
 * @str:  string pointer
 * Return: string.
 */
char *cap_string(char *str)
{
	char ch[] = ",\t;\n; .!?\"(){}";
	int i, j, m;

	for (i = 0; str[i] != '\0'; i++)
	{
		m = 0;
		if (i == 0)
		{
			m = 1;
		}
		else
		{
			for (j = 0; ch[j] != '\0'; j++)
			{
				if (str[i - 1] == ch[j])
				{
					m = 1;
					break;
				}
			}
		}
		if (m == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
