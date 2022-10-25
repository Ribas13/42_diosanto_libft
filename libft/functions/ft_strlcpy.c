/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:13:53 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/24 16:07:18 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
