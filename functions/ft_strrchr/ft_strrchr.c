
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(char *s, int c)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		if (*s == '\0' && c != '\0')
			return (NULL);
		i++;
	}
	return (&s[j]);
}
