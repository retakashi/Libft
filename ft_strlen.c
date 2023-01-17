/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakashi <rtakashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:28:41 by rtakashi          #+#    #+#             */
/*   Updated: 2023/01/16 21:30:53 by rtakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <string.h>
// #include<stdio.h>

// int	main(void)
// {
// 	char dst1[]="42tokyo";
// 	char dst2[]="42tokyo";
	// printf("%lu\n", ft_strlen(dst1));
	// printf("%lu\n", ft_strlen(NULL));
	// printf("%lu\n", strlen(dst2));
// 	printf("%lu\n", strlen(NULL));
// 	return (0);
// }
