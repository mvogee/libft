/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 21:20:32 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/23 21:21:53 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int count;

	count = (int)ft_strlen((char*)s) + 1;
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char*)s + count);
		count--;
	}
	return (NULL);
}
