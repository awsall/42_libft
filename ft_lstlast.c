/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:23:09 by awsall            #+#    #+#             */
/*   Updated: 2026/02/28 16:11:06 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *last_node;
	t_list *awa = ft_lstnew("nombre");
	t_list *sall = ft_lstnew("apellido");

	awa->next = sall;
	last_node = ft_lstlast(awa);
	printf("last = %s\n", (char *)last_node->content);
	free(awa);
	free(sall);
	return (0);
}*/
