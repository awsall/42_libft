/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:22:59 by awsall            #+#    #+#             */
/*   Updated: 2026/03/03 11:18:45 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del_content(void *content)
{
	free(content);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/* int	main(void)
{
	t_list *age;

	age = ft_lstnew(malloc(10));
	ft_lstdelone(age, del_content);
	return (0);
} */
