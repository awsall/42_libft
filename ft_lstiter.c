/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:29:02 by awsall            #+#    #+#             */
/*   Updated: 2026/03/03 12:42:01 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>

void	show_content(void *content)
{
	printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list	*mi_lista;
	t_list	*sub_lista;
	
	mi_lista = ft_lstnew("nombre");
	sub_lista = ft_lstnew("apellido");
	mi_lista->next = sub_lista;
	ft_lstiter(mi_lista, show_content);
}*/
