#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char **mng_mem(size_t count, char **array, size_t filled, _Bool lib)
{
	if (lib == 0)
	{
		array = malloc((count + 1) * sizeof(char *));
		if (!array)
			return(0);
		return(array);
	}
	else if (lib == 1 && array)
	{
		while (filled > 0)
		{
			filled--;
			free(array[filled]);
		}
		free(array);
	}
	return(0);
}

static size_t	count_sep(const char *s, char c)
{
	size_t	i;
	size_t	count;
	_Bool	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	if (!s || !*s)
		return(0);
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return(count);
}

static char *allocate_word(const char *s, size_t start, size_t end)
{
	size_t	len_word;
	char	*word;

	len_word = end - start + 1;
	word = malloc(len_word + 1);
	if (!word)
		return(0);
	ft_strlcpy(word, s + start, len_word + 1);
	return(word);
}

static int	next_word(const char *s, char sep, int *start, int *end, int *i)
{
	while (s[*i] && s[*i] == sep)
		(*i)++;
	if (!s[*i])
		return(0);
	*start = *i;
	while (s[*i] && s[*i] != sep)
		(*i)++;
	*end = *i - 1;
	return(1);
}

char **ft_split(const char *s, char sep)
{
	int	i;
	int	start;
	int	end;
	size_t	word;
	char	**array;

	if (!s)
		return(0);
	i = 0;
	start = 0;
	end = 0;
	word = 0;
	array = mng_mem(count_sep(s, sep), 0, 0, 0);
	if (!array)
		return(0);
	while (next_word(s, sep, &start, &end, &i))
	{
		array[word] = allocate_word(s, start, end);
		if (!array[word])
			return(mng_mem(0, array, word, 1));
		word++;
	}
	array[word] = 0;
	return(array);
}
