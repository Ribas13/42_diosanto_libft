/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:14:33 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/24 16:06:17 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int a)
{
	if ((a >= 0 && a <= 31) || (a == 127))
	{
		return (0);
	}
	else
	{
		return (a);
	}
}
/*
int	main(void)
{
	char	c;

	c = '.';
	printf("mine : %i\n", isprint(c));
}*/
