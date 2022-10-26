/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:14:33 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/26 12:20:14 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if ((a >= 0 && a <= 31) || (a == 127))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/*
int	main(void)
{
	char	c;

	c = '.';
	printf("mine : %i\n", isprint(c));
}*/
