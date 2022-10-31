/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:44:25 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/31 12:29:25 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_size(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		size;
	char	*str;
	int		i;

	nbr = n;
	i = 0;
	size = ft_size(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	if (n == 0)
	{
		str[i] = '0';
		i++;
		str[i] = '\0';
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	if (ft_sign(n) == 1)
		str[i] = '-';
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	printf("%i\n", ft_size(25));
	printf("%s\n", ft_itoa(25));
}
