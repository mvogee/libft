/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:07:09 by exam              #+#    #+#             */
/*   Updated: 2016/11/15 09:07:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_len(long long int value, int base)
{
	int	len;

	len = 0;
	while (value / base)
	{
		value = value / base;
		len++;
	}
	return (len + 1);
}

char		*ft_itoa_base(long long int value, int base)
{
	int		len;
	char	*ret;
	char	*nums;

	nums = "0123456789abcdef";
	if (value < 0 && base != 10)
		value *= -1;
	len = get_len(value, base);
	if (value < 0 && base == 10)
		len += 1;
	ret = (char*)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	if (value < 0 && base == 10)
	{
		ret[0] = '-';
		value *= -1;
	}
	ret[len] = '\0';
	while (len-- >= 0 && value != 0)
	{
		ret[len] = *(nums + (value % base));
		value /= base;
	}
	return (ret);
}
