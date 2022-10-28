/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:14:06 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/28 11:18:12 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*size_t	ft_strlen(const char *s)
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
	arr_i = 0;
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
	arr[i] = 0;
	return (arr);
}

/*int	main(void)
{
	int i = 0;
	char **array[50];

	array[0] = ft_split("ola eu", ' ');

	while (array[i])
	{
		printf("%d", array[i]);
		i++;
	}
}*/
