/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:10:56 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/27 10:19:08 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	unsigned char	chr;
	
	count = 0;
	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	chr = (unsigned char)c;	
	while (count < n)
	{
		*tmpdst = *tmpsrc;
		if (*tmpdst == chr)
			return (tmpdst);
		tmpdst++;
		tmpsrc++;
		count++;
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	char dst[10];
	char *src = "abcdefghi";
	char *res =	ft_memccpy(dst, src, 'e', 10);
	printf("FT Res: %p\n", res);
	printf("FT dst: %s\n", dst);

	char dst2[10];
	char *src2 = "abcdefghi";
	char *res2 = memccpy(dst2, src2, 'e', 10);
	printf("OG res: %p\n", res2);
	printf("OG dst: %s\n", dst2);

	char dst3[10];
	char *src3 = "abcdefghi";
	char *res3 = ft_memccpy(dst3, src3, 'g', 10);
	printf("FT res: %s\n", res3);
	printf("FT dst: %s\n", dst3);

	char dst4[10];
	char *src4 = "abcdefghi";
	char *res4 = memccpy(dst4, src4, 'g', 10);
	printf("OG res: %s\n", res4);
	printf("OG dst: %s\n", dst4);

	char dst5[10];
	char *src5 = "abcdefghi";
	char *res5 = ft_memccpy(dst5, src5, 'j', 10);
	printf("FT res: %p\n", res5);
	printf("FT dst: %s\n", dst5);

	char dst6[10];
	char *src6 = "abcdefghi";
	char *res6 = memccpy(dst6, src6, 'j', 10);
	printf("OG res: %p\n", res6);
	printf("OG dst: %s\n", dst6);
}
