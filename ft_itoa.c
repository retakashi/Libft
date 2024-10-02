/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakashi <rtakashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:34:22 by rtakashi          #+#    #+#             */
/*   Updated: 2023/02/07 16:17:15 by rtakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_digit(int n);
static char			*num_array(char *arr, unsigned int digit, int n);
static unsigned int	array_tail(unsigned int digit, int n);

char	*ft_itoa(int n)
{
	char			*arr;
	unsigned int	digit;

	digit = get_digit(n);
	arr = (char *)malloc(sizeof(char) * (digit + 1));
	if (arr == NULL)
		return (NULL);
	arr = num_array(arr, digit, n);
	return (arr);
}

static unsigned int	array_tail(unsigned int digit, int n)
{
	unsigned int	tail;

	if (n < 0)
		tail = digit;
	else
		tail = digit - 1;
	return (tail);
}

static char	*num_array(char *arr, unsigned int digit, int n)
{
	unsigned int	i;
	unsigned int	tail;

	i = 0;
	tail = array_tail(digit, n);
	if (n < 0)
		arr[i++] = '-';
	while (i < digit)
	{
		if (n < 0)
		{
			arr[tail - i++] = n % 10 * -1 + '0';
			n = n / 10 * -1;
		}
		else
		{
			arr[tail - i++] = n % 10 + '0';
			n = n / 10;
		}
	}
	arr[digit] = '\0';
	return (arr);
}

static unsigned int	get_digit(int n)
{
	unsigned int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*arr1;
// 	char	*arr2;
// 	char	*arr3;
// 	char	*arr4;
// 	char	*arr5;
// 	char	*arr6;
// 	arr1 = ft_itoa(1);
// 	arr2 = ft_itoa(INT_MIN);
// 	arr3 = ft_itoa(INT_MAX);
// 	arr4 = ft_itoa(0);

// 	printf("arr1(1): %s\n",arr1);
// 	printf("arr2(INT_MAX): %s\n",arr2);
// 	printf("arr3(INT_MIN): %s\n",arr3);
// 	printf("arr4(0): %s\n",arr4);	
// 	return (0);
// }
