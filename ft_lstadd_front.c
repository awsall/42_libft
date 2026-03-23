/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:26:55 by awsall            #+#    #+#             */
/*   Updated: 2026/02/28 14:11:54 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*libft = ft_lstnew("hello");
	t_list	*nuevo = ft_lstnew("Mundo");

	ft_lstadd_front(&libft, nuevo);
	printf("%s\n", (char *) libft->content);
	printf("%s\n", (char *) libft->next->content);
	free(libft->next);
	free(libft);
	return (0);
}*/
