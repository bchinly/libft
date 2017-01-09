#include <stdlib.h>
#include <unistd.h>

int	char_is_separator(char c)
{
	if (c < 33)
		return (1);
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1]) == 1
		&& char_is_separator(str[i]) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i]) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i]) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j]) == 0)
				j++;
			split[word] = (char*)malloc(sizeof(char) * (j + 1));
			write_word(split[word], &str[i]);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str)
{
	char	**split;
	int	words;

	words = count_words(str);
	split = (char**)malloc(sizeof(char*) * (words + 1));
	split[words] = 0;
	write_split(split, str);
	return (split);
}
/*
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**str;
	int	i;

	i = count_words(argv[1]);
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = ft_split(argv[1]);
	while (i > 0)
	{
		ft_putstr(str[i - 1]);
		if (i == 0)
			break ;
		write(1, " ", 1);
		i--;
	}
	write (1, "\n", 1);
	return (0);
}*
