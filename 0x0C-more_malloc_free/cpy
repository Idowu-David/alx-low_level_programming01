#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
<<<<<<< HEAD
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

=======
	unsigned int i,len1, len2;
	char *str;
	
	len1 = len2 = 0;
>>>>>>> fc095c252c9a1e8ca448c882d20ee0662c16cb95
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
<<<<<<< HEAD
		size1++;
=======
<<<<<<< HEAD
		str[i] = s1[i];
=======
		str = malloc(sum * sizeof(char) + 1);
		if (str == NULL)
			return (0);
		/* copy s1 into str */
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		/*copy all the strings in s2 into str */
		for (j = len1, a = 0; s2[a] != '\0'; j++, a++)
		{
			str[j] = s2[a];
		}
		str[j] = '\0';
>>>>>>> 31eba629af66ca421409c30819eb4a134083b78a
>>>>>>> fc095c252c9a1e8ca448c882d20ee0662c16cb95
	}

	while (s2[size2] != '\0')
	{
<<<<<<< HEAD
		size2++;
=======
<<<<<<< HEAD
		str[i] = s2[i - len1];
=======
		str = malloc((n + len1) * sizeof(char) + 1);
		if (str == NULL)
			return (0);
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}

		for (j = len1, a = 0; s2[a] != s2[n]; j++, a++)
		{
			str[j] = s2[a];
		}
		str[j] = '\0';
>>>>>>> 31eba629af66ca421409c30819eb4a134083b78a
>>>>>>> fc095c252c9a1e8ca448c882d20ee0662c16cb95
	}

	if (n > size2)
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

return (p);
}
