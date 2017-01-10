
#include <string.h>

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
				if (needle[j] == '\0')
					return (&haystack[k]);
			}
		}
		i++;
	}
	if (haystack[i] == '\0' && needle[j] != '\0')
		return (NULL);
	else return (haystack);
}
