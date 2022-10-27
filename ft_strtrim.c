/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:39:45 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/26 18:12:46 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_check_if_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	size_to_alloc(const char *str, const char *set)
{
	int	i;
	int	char_counter;

	i = 0;
	char_counter = 0;
	while (str[i] != '\0')
	{
		if (ft_check_if_in_set(str[i], set) == 0)
			char_counter++;
		i++;
	}
	return (i - char_counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*final;

	final = (char *)malloc(sizeof(*final) * size_to_alloc(s1, set) + 1);
	if (!final)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ft_check_if_in_set(s1[i], set) == 0)
		{
			final[j] = s1[i];
			j++;
		}
		i++;
	}
	return (final);
}
