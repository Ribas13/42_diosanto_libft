/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:13:27 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/25 11:54:55 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = dest;
	s = src;
	i = 0;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
/*
int	main(void)
{
	char	*src;
	char	*dest;

	src = strdup("hello111111111");
	dest = strdup("makie");
	ft_memcpy(dest, src, 14);
	printf("%s\n", dest);
}*/
