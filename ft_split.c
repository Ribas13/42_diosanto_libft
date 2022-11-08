/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:14:06 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/08 13:15:37 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = start;
	if (len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	str = (char *)malloc(len + 1);
	if (!str)
	{
		return (NULL);
	}
	while (j < ft_strlen(s) && i < len)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

static int	word_size(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static size_t	word_counter(char const *s, char c)
{
	size_t	i;
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c && s[index + 1] != c)
		{
			i++;
		}
		index++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	size_t	words;
	char	**tab;

	i = 0;
	tab = malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	words = 0;
	while (words < word_counter(s, c))
	{
		while (s[i] == c)
			i++;
		size = word_size(s, c, i);
		tab[words] = ft_substr(s, i, word_size(s, c, i));
		i += size;
		words++;
	}
	tab[words] = 0;
	return (tab);
}

/*int	main(void)
{
	int	i;
	char **split;
	split = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	i = 0;
	//printf("%i\n", word_counter("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' '));
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/
