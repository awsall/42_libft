/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:54:39 by awsall            #+#    #+#             */
/*   Updated: 2026/02/25 14:11:29 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	my_toupper(unsigned int i, char *s)
{
	(void)i;
	if (ft_isdigit(*s))
		*s = 'a';
}

int	main(void)
{
	char	str[7] = "7777742";

	ft_striteri(str, my_toupper);
	printf("%s\n", str);
	return (0);
}*/
