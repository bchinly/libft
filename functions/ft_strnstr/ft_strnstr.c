#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;
	
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		if (haystack[i] == needle[j])
			k = i;
		while (haystack[i] == needle[j] && len > 0)
		{
			i++;
			j++;
			len--;
			if (needle[j] == '\0')
				return (&haystack[k]);
		}
		i++;
		len--;
	}
	return (NULL);
}
