
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
		if (*s == '\0' && c != '\0')
			return (NULL);
	}
	return (s);
}
