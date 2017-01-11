
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	int i;
	
	i = 0;
	if (s[i] == '\0')
	{
		if (c != '\0')
			return (NULL);
		return (&s[i]);
	}
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		if (s[i] == '\0' && c != '\0')
			return (NULL);
	}
	return (&s[i]);
}
