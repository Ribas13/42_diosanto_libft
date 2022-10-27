/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:14:06 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/27 12:18:44 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	word_counter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	if (!s)
		return (0);
	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			counter++;
		}
		i++;
	}
	if (s[i] == '\0')
		counter++;
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	start;
	size_t	arr_i;
	char	**arr;

	i = 0;
	start = 0;
	n = word_counter(s, c);
	arr = (char *)malloc(sizeof(char) * word_counter(s, c));
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else if (s[i] == c)
		{
			arr[arr_i] = ft_substr(s, start, i);
			arr_i++;
		}
		start = i + 1;
	}
	arr[i] = '\0';
	return (arr);
}

int	main(void)
{
	printf("%i", word_counter("Hello my name is Diogo", ' '));
}
