/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakashi <rtakashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:17:56 by rtakashi          #+#    #+#             */
/*   Updated: 2023/01/16 21:45:14 by rtakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_null(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	dst_cat;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen_null(dst);
	if (dstlen < dstsize)
	{
		i = 0;
		dst_cat = dstsize - dstlen;
		while (dst_cat)
		{
			dst[dstlen++] = src[i++];
			dst_cat--;
		}
		dst[dstlen - 1] = '\0';
		return (dstlen - i + srclen);
	}
	else
	{
		return (srclen + dstsize);
	}
}

static size_t	ft_strlen_null(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char dst1[] = "42tokyo";
// 	char src1[] = "!!!";
// 	char dst2[] = "42tokyo";
// 	char src2[] = "!!!";
// 	char *dst3 = calloc(100, sizeof(char));
// 	char *dst4 = calloc(100, sizeof(char));
// 	char *src3 = calloc(100, sizeof(char));
// 	char *src4 = calloc(100, sizeof(char));
// printf("%lu\n", ft_strlcat(dst1, src1, 5));
// printf("%s\n", dst1);
// printf("%lu\n", ft_strlcat(NULL, NULL, 0));
// printf("%lu\n", ft_strlcat(NULL, NULL, 5));
// printf("%s\n", dst1);
// printf("%lu\n", ft_strlcat(dst1, NULL, 3));
// printf("%s\n", dst1);
// printf("%lu\n", ft_strlcat(dst1, NULL, 5));
// printf("%s\n", dst1);
// printf("%lu\n", ft_strlcat(NULL, src1, 3));
// printf("%s\n", dst1);
// printf("%lu\n", ft_strlcat(NULL, src1, 0));
// printf("%lu\n", ft_strlcat(dst1, NULL, 0));
// printf("%lu\n", strlcat(dst2, src2, 5));
// printf("%s\n", dst2);
// printf("%lu\n", strlcat(NULL, NULL, 0));
// printf("%lu\n", strlcat(NULL, NULL, 5));
// printf("%s\n", dst2);
// printf("%lu\n", strlcat(dst2, NULL, 3));
// printf("%s\n", dst2);
// printf("%lu\n", strlcat(dst2, NULL, 5));
// printf("%s\n", dst2);
// printf("%lu\n", strlcat(NULL, src2, 3));
// printf("%s\n", dst2);
// printf("%lu\n", strlcat(NULL, src2, 0));
// printf("%lu\n", strlcat(dst2, NULL, 0));
// printf("%lu\n", ft_strlcat(dst3, "", 100));
// printf("%lu\n",ft_strlen_null(""));
// printf("%lu\n",ft_strlen_null(dst3));
// printf("%lu\n", ft_strlcat(dst3, "", 50));
// printf("%lu\n",strlcat(dst4, "", 100));
// printf("%lu\n", strlcat(dst4, "", 50));
// return (0);
// }
