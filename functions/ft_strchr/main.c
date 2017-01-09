#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c);

int	main()
{
	char *str = "hello world";
	char *str2 = "hello world";

	str = ft_strchr(str, '\0');
	printf("%s\n", str);
	str2 = strchr(str2, '\0');
	printf("%s\n", str2);

}
