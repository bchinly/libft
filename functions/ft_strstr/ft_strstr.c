#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *haystack, char *needle);

int	main()
{
	char *str = "foo bar baz";
	char *str2 = "bar";
	char *ptr = ft_strstr(str, str2);
	printf("%s\n", ptr);
	char *ptr2 = strstr(str, str2);
	printf("%s\n", ptr2);
}
