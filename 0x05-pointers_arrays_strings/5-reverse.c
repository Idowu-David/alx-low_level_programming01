#include <stdio.h>

void rev_string(char *s)
{
	int i;
	char *ptr = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		*(ptr + i) = 'o';
		printf("[s%d] = %c\n", i, s[i]);
	}
}
int main()
{
	rev_string("reverse");
	return (0);
}
