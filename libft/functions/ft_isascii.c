/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:14:22 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/24 16:06:56 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char	c;

	c = 127;
	printf("Is ascii: %i", isascii(c));
}*/
