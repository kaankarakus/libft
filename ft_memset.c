/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:28:56 by kkarakus          #+#    #+#             */
/*   Updated: 2023/10/12 17:29:44 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (len == 0)
		return (b);
	i = 0;
	while (i <= len - 1)
	{
		((t_byte *)b)[i] = (t_byte)c;
		i++;
	}
	return (b);
}
