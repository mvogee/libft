/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:26:39 by mvogee            #+#    #+#             */
/*   Updated: 2016/09/26 10:44:49 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	int		strlen;
	char	*s2;

	count = 0;
	if (!s1)
		return (NULL);
	strlen = ft_strlen((char*)(s1));
	s2 = (char*)malloc(sizeof(char) * (strlen + 1));
	if (!s2)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
