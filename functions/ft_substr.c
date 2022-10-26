/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:22:37 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/26 12:38:18 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
}
