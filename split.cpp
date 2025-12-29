#include "mylib.hpp" 

static size_t	count_words(char const *str, char sep)
{
	size_t	idx;
	size_t	count;
	int		check;

	idx = 0;
	count = 0;
	check = 88;
	while (str[idx] != '\0')
	{
		if ((str[idx] == sep))
		{
			check = 1;
		}
		else if ((str[idx] != sep) && (check == 1 || check == 88))
		{
			count++;
			check = -1;
		}
		idx++;
	}
	return (count);
}

static void	*to_free(char **result, size_t col)
{
	size_t	i_col;

	i_col = 0;
	if (col == 0)
		free(result[i_col]);
	while (i_col < col)
	{
		free(result[i_col]);
		i_col++;
	}
	free(result);
	return (NULL);
}

static size_t	count_word_len(char const *s, size_t start, char sep)
{
	size_t	count;

	count = 0;
	while ((s[start] != '\0') && (s[start] != sep))
	{
		count++;
		start++;
	}
	return (count);
}

static char	**fill(char const *s, char sep, char **result)
{
	size_t	idx;
	size_t	col;
	size_t	row;

	idx = 0;
	col = 0;
	while (s[idx] && col < count_words(s, sep))
	{
		if (s[idx] != sep)
		{
			row = 0;
			result[col] = (char*) malloc((count_word_len(s, idx, sep) + 1));
			if (!result[col])
				return ((char **) to_free(result, col));
			while (s[idx] && s[idx] != sep)
				result[col][row++] = s[idx++];
			result[col][row] = '\0';
			col++;
		}
		else
			idx++;
	}
	return (result);
}


/**
 * _split - Splits a string by a delimiter into char**
 * @s: String to split
 * @c: Delimiter character
 *
 * Return: char** as a 2D array of splited string s
 */
char	**_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char**) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	result[count_words(s, c)] = NULL;
	result = fill(s, c, result);
	return (result);
}

// #include <stdio.h>

//  int	main()
//  {
//  	char **res;
// 	size_t c = 0;

//  	res = _split("hello! Word2 Word3", ' ');

//  	while (c < count_words("hello! Word2 Word3", ' '))
//  	{
//  		printf("===%s===", res[c]);
//  		c++;
//  		printf("\n");
//  	}
//  	printf("\nTest count words; %lu\n", count_words("hello! Word2 Word3", ' '));
// 	c = 0;
// 	while (c < count_words("hello! Word2 Word3", ' '))
//     {
//         free(res[c]);
//         c++;
//     }
//     free(res);
//  	return (0);
//  }