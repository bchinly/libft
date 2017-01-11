#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	int	i;
	int	j;
	int	k;
	
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0' && len > 0)
	{
		if (big[i] == little[j])
			k = i;
		while (big[i] == little[j] && len > 0)
		{
			i++;
			j++;
			len--;
			if (little[j] == '\0')
				return (&big[k]);
		}
		i++;
		len--;
	}
	return (NULL);
}
