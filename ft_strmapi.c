/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 10:59:12 by awsall            #+#    #+#             */
/*   Updated: 2026/03/06 12:56:13 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = malloc(sizeof (char) * (ft_strlen(s) +1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

static char	be_tolower(unsigned int i, char c)
{
	while (c == 'L' || c == 'O')
	{
		return (c + 32);
		i++;
	}
	return (c);
}

int	main(void)
{
	char	*rlt;

	rlt = ft_strmapi("HELLO MUNDO", be_tolower);
	printf("%s\n", rlt);
	return (0);
}*/
