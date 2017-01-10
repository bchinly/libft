#include <string.h>
#include <stdio.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len);

int	main()
{
	char *str = "foo bar baz";
	char *str2 = "bar";
	char *ptr = ft_strnstr(str, str2, 6);
	printf("%s\n", ptr);
	char *ptr2 = strnstr(str, str2, 6);
	printf("%s\n", ptr2);
}
