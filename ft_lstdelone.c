/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvogee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 12:23:19 by mvogee            #+#    #+#             */
/*   Updated: 2016/10/01 12:45:29 by mvogee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst && *alst)
	{
		(*del)((*alst)->content, (*alst)->conent_size);
		free(*alst);
		*alst = NULL;
	}
}
