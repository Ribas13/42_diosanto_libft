/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:15:07 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/25 11:36:01 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lift.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = dlen;
	if (dlen < dstsize - 1 && dstsize > 0)
	{
		while (i + j <= dstsize - 1 && src[i])
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dlen >= dstsize)
		dlen = dstsize;
	return (dlen + slen);
}
