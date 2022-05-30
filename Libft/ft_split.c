/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:49:14 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:37:04 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	mark;

	i = 0;
	mark = 0;
	while (*str)
	{
		if (*str != c && mark == 0)
		{
			mark = 1;
			i++;
		}
		else if (*str == c)
			mark = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		mark;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !(split))
		return (NULL);
	i = 0;
	j = 0;
	mark = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && mark < 0)
			mark = i;
		else if ((s[i] == c || i == ft_strlen(s)) && mark >= 0)
		{
			split[j++] = word_dup(s, mark, i);
			mark = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/* int	main(void)
{
	char	a[] = "\0aa\0bbb";
	printf("%c\n", *ft_split(a, "\0")[0]);
	printf("%c\n", *ft_split(a, "\0")[1]);
	return (0);
} */

/*El count_words retorna el numero de partes que se puede dividir
el string entre el caracter indicado como 'c'*/
