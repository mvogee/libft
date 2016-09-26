/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:05:10 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/23 14:08:44 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	count2;
	size_t	src_len;
	size_t	dst_len;

	src_len = (size_t)ft_strlen((char*)src);
	dst_len = (size_t)ft_strlen((char*)dst);
	count = dst_len;
	count2 = 0;
	while (count < size - 1)
	{
		dst[count] = src[count2];
		count++;
		count2++;
	}
	
	return (src_len + dst_len);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{


  char str1[9];
  int i = ft_strlcat(str1, "are cated", 8);
  printf("FT %i\n", i);
  ft_putstr(str1);

  char str2[9];
  int k = strlcat(str2, "are cated", 8);
  printf("\nOG %i\n", k);
  ft_putstr(str2);
	return (0);
}
*/