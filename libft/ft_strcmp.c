/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 15:51:48 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/23 15:54:37 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (((unsigned char)s1)[count] - ((unsigned char)s2)[count] != 0)
			return (chars1[count] - s2[count]);
		count++;
	}
	return (0);
}
