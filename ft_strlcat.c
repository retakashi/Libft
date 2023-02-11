/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reira <reira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:17:56 by rtakashi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/11 14:47:55 by rtakashi         ###   ########.fr       */
=======
/*   Updated: 2023/02/10 18:05:56 by reira            ###   ########.fr       */
>>>>>>> 0bffc8c2ad946b55a488a454b51e24d43dc674d9
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	srclen;
// 	size_t	i;

// 	srclen = ft_strlen(src);
// 	i = 0;
// 	while (src[i] != '\0' && i+1< dstsize)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	if (dstsize != 0)
// 	{
// 		dst[i] = '\0';
// 	}
// 	return (srclen);
// }

>>>>>>> 0bffc8c2ad946b55a488a454b51e24d43dc674d9
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	dst_cat;

	srclen = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	dst_cat = dstsize - dstlen;
	ft_strlcpy(dst + dstlen, src, dst_cat);
	return (dstlen + srclen);
}
<<<<<<< HEAD

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	size_t	i;
// 	size_t	j;

=======

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	d_size;
// 	size_t	s_size;

// 	if (dst == NULL && dstsize == 0)
// 		return (ft_strlen(src));
// 	d_size = ft_strlen(dst);
// 	s_size = ft_strlen(src);
// 	i = 0;
// 	if (d_size >= dstsize)
// 		return (dstsize + s_size);
// 	while (src[i] != '\0' && i < (dstsize - d_size - 1))
// 	{
// 		dst[d_size + i] = src[i];
// 		i++;
// 	}
// 	dst[d_size + i] = '\0';
// 	return (d_size + s_size);
// }

// int	main(void)
// {
>>>>>>> 0bffc8c2ad946b55a488a454b51e24d43dc674d9
// 	char dst1[100] = "42tokyo";
// 	char src1[] = "!!";
// 	char dst2[100] = "42tokyo";
// 	char src2[] = "!!";
<<<<<<< HEAD
	
// 	i = 0;
// 	while (i < 101)
// 	{
// 		printf("original= %lu\n", strlcat(dst1, src1, i));
// 		printf("original= %s\n", dst1);
// 		printf("ft= %lu\n", ft_strlcat(dst2, src2, i));
// 		printf("ft= %s\n", dst2);
// 		j = 0;
// 		if (strncmp(dst1, dst2, i) != 0)
// 		{
// 			printf("No");
// 			break ;
// 		}
// 		i++;
// 	}
=======
// 	size_t i;
// 	size_t j;
// 	size_t k;
// char *dst3 = calloc(100, sizeof(char));
// char *dst4 = calloc(100, sizeof(char));
// char *src3 = calloc(100, sizeof(char));
// char *src4 = calloc(100, sizeof(char));
// i=0;
// while(i<100)
// {
// printf("original= %lu\n", strlcat(dst1, src1, i));
// 	printf("original= %s\n", dst1);
// 	printf("ft= %lu\n", ft_strlcat(dst2, src2, i));
// 	printf("ft= %s\n", dst2);
// 	j=0;
// 	k=0;
// 	if(strncmp(dst1,dst2,i)!=0)
// 	{
// 		printf("No");
// 		break;
// 	}
// 	i++;
// }
>>>>>>> 0bffc8c2ad946b55a488a454b51e24d43dc674d9
// 	return (0);
// }

