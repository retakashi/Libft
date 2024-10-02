/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reira <reira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:23:44 by rtakashi          #+#    #+#             */
/*   Updated: 2024/10/02 22:39:17 by reira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_casted_putnbr(long n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long long_n;
	
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = n;
		long_n *= -1;
		ft_casted_putnbr(long_n, fd);
	}
	else
		ft_casted_putnbr(n, fd);
}

static void	ft_casted_putnbr(long n, int fd)
{
	if (n > 9)
	{
		ft_casted_putnbr(n / 10, fd);
		ft_casted_putnbr(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_putnbr_fd(-1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(INT_MAX, 1);
// 	printf("\n");
// 	ft_putnbr_fd(INT_MIN, 1);
// 	printf("\n");
// 	return (0);
// }
