/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:00 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/27 13:48:12 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (!little)
		return ((const char *)big);
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
	return (NULL);
}
