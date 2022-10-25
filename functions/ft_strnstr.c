/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:00 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/25 16:29:33 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (little == '\0')
		return ((char *) little);
	while (big[i] != '\0')
	{
		a = 0;
		while (big[i + a] == little[a] && i + a < len)
		{
			if (big[i + a] == '\0' && little[a] == '\0')
			{
				return ((char *)&big[i]);
			}
			a++;
		}
		if (little[a] == '\0')
		{
			return ((char *)big + a);
		}
		i++;
	}
	return (0);
}
