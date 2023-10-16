/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:21:11 by kkarakus          #+#    #+#             */
/*   Updated: 2023/10/13 16:08:09 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "adgjklen";
	printf("%p\n", ft_memchr(s, 'j', 4));
	printf("%c", *(char *)ft_memchr(s, 'j', 2));
	return (0);
}
