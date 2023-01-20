/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakashi <rtakashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:46:56 by rtakashi          #+#    #+#             */
/*   Updated: 2023/01/20 19:05:40 by rtakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("%c",ft_tolower('A'));
//     return(0);
// }
