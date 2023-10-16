/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:19:17 by kkarakus          #+#    #+#             */
/*   Updated: 2023/10/12 16:30:16 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((t_byte *)dst)[i] = ((t_byte *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((t_byte *)dst)[i] = ((t_byte *)src)[i];
			i++;
		}
	}
	return (dst);
}
