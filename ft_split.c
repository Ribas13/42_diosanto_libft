/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:14:06 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/27 14:30:49 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[start] = '\0';
	return (str);
}*/

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
	size_t	start;
	size_t	arr_i;
	char	**arr;

	i = 0;
	start = 0;
	arr = malloc(sizeof(char *) * (word_counter(s, c) + 1));
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

/*int	main(void)
{
	int i = 0;
	char **array;

	array = ft_split("Hello my name is Diogo", ' ');
	while (array[i])
	{
		printf("%s", array[i]);
		i++;
	}
}*/
