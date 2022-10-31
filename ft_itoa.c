/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:44:25 by diosanto          #+#    #+#             */
/*   Updated: 2022/10/29 13:43:24 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_if0(int n)
{
	int	size;

	if (n > 0)
	{
		size = 0;
	}
	else
		size = 1;
	return (size);
}

int	ft_sign(int n)
{
	
}

char	*ft_itoa(int n)
{
	int		nbr;
	int		size;
	int		sign;
	char	*str;

	nbr = n;
	size = ft_check_if0(n);
	
}
