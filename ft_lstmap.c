/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:42:45 by awsall            #+#    #+#             */
/*   Updated: 2026/03/06 13:22:53 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*res;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_list = ft_lstnew(content);
		if (!new_list)
		{
			del(content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new_list);
		lst = lst->next;
	}
	return (res);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void *ft_istoupper(void *s)
{
	char *str;
	int	i;

	str = strdup((char *)s);
	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);

}

void	del_content(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*maison;
	t_list	*hotel;
	t_list	*ecole;
	t_list	*result;
	t_list	*tmp;
	
	maison = ft_lstnew("cuis");
	hotel = ft_lstnew("bed");
	ecole = ft_lstnew("class");
	maison->next = hotel;
	hotel->next = ecole;
	result = ft_lstmap(maison, ft_istoupper, del_content);
	tmp = result;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;	
	}
	ft_lstclear(&result, del_content);
}*/
