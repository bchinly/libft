
#include <string.h>

char	*ft_strstr(char *big, char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return (&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
