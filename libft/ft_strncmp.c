/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:31:21 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/23 16:33:15 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int count;

	count = 0;
	while ((s1[count] || s2[count]) && (size_t)count < n)
	{
		if (s1[count] - s2[count] != 0)
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
