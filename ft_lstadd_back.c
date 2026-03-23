/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:12:42 by awsall            #+#    #+#             */
/*   Updated: 2026/02/28 17:16:46 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = ft_lstlast(*lst);
	if (!tmp)
		*lst = new;
	else
		tmp->next = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*m_list;
	t_list	*new;
	t_list	*number;

	m_list = NULL;
	ft_lstadd_back(&m_list, ft_lstnew("primero"));
	ft_lstadd_back(&m_list, ft_lstnew("second"));

	new = ft_lstnew("wice");
	ft_lstadd_back(&m_list, new);
	printf("content list:\n");
	number = m_list;
	while (number)
	{
		printf("- %s\n", (char *)number->content);
		number = number->next;
	}
	printf("final size: %d\n", ft_lstsize(m_list));
	while (m_list)
	{
		number = m_list->next;
		free(m_list);
		m_list = number;
	}
	return (0);
}*/
