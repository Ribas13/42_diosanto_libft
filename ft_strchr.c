/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:45:40 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/25 17:34:59 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "HellAo";
	int	c = 'A';
	printf("%i", ft_strchr(str, c));
}*/