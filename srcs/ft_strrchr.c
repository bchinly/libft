
#include <string.h>

int		ft_strlen(char *str);

char	*ft_strrchr(char *s, int c)
{
	char *ptr;

	ptr = NULL;
	if (s[0] == '\0')
	{
		if (c != '\0')
			return (ptr);
		return (&s[0]);
	}
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	while (*s != '\0')
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	return (ptr);
}
