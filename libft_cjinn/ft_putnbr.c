/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjinn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:10:06 by cjinn             #+#    #+#             */
/*   Updated: 2019/04/22 16:54:54 by cjinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	else if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}