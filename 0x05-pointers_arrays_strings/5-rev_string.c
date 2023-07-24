#include <main.h>
/**
 * @s: string parameter input
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\n'; ++l);

	for (i = 0; i < 1 / 2; i++);
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
	       s[l - 1 - i] =temp;
	}
}	
