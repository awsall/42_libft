/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:22:07 by awsall            #+#    #+#             */
/*   Updated: 2026/02/28 15:18:47 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	res;
	
	t_list *awa = ft_lstnew("Nombre");
	res = ft_lstsize(awa);
	printf("size = %d\n", res);
	return (0);
}*/
