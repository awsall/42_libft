/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:14:53 by awsall            #+#    #+#             */
/*   Updated: 2026/03/06 13:25:23 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (!lst || !del || !*lst)
		return ;
	while (*lst != NULL)
	{
		t = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = t;
	}
}

/* #include <stdio.h>

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list = NULL;

	ft_lstadd_back(&list, ft_lstnew(ft_strdup("number 1")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("number 2")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("number 3")));
	
	printf("%d\n", ft_lstsize(list));
	ft_lstclear(&list, del_content);
	if (list == NULL)
		printf ("list deleted and ptr is NULL.\n");
	else
		printf("Error: the ptr is not NULL.\n");
	return (0);
} */
