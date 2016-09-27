/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 21:01:09 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/25 21:29:47 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmpdst;
	unsigned char *tmpsrc;

	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	if (len == 0 || dst == src)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			tmpdst[len] = tmpsrc[len];
			len--;
		}
	}
	while (len > 0)
	{
		*tmpdst = *tmpsrc;
		tmpdst++;
		tmpsrc++;
		len--;
	}
	return (dst);
}
