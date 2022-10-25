/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:12:38 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/24 16:06:25 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	int				c;

	b = s;
	c = '\0';
	while (n > 0)
	{
		*b = c;
		b++;
		n--;
	}
}
/*
int	main(void)
{
	char	*str;

	str = strdup("hello111111111");
	ft_bzero(str, 14);
	printf("%s\n", str);
}*/
