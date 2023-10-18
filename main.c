/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:21:11 by kkarakus          #+#    #+#             */
/*   Updated: 2023/10/18 14:40:29 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *cl)
{
	free(cl);
	cl = NULL;
}

void	*f(void *s)
{
	(void)s;
	return ("aaa");
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	new = ft_lstnew("zxc");
	lst = ft_lstnew("asd");
	lst->next = new;
	t_list	*last = ft_lstmap(lst, f, del);
	printf("lst: %s\n next: %s", last->content, last->next->content);
}
