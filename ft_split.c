/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:14:06 by diosanto          #+#    #+#             */
/*   Updated: 2022/11/02 16:37:11 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	word_counter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	tab_i;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	tab = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	tab_i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else if (s[i] == c)
		{
			tab[tab_i] = ft_substr(s, start, i);
			tab_i++;
		}
		start = i + 1;
	}
	tab[i] = 0;
	return (tab);
}
