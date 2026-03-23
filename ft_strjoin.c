/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:36:23 by awsall            #+#    #+#             */
/*   Updated: 2026/02/25 14:23:06 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (NULL);
	a = 0;
	b = 0;
	res = malloc((ft_strlen(s1) + ft_strlen(s2)+1));
	if (!res)
		return (NULL);
	while (s1[a])
		res[b++] = s1[a++];
	a = 0;
	while (s2[a])
		res[b++] = s2[a++];
	res[b] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str_final;
	const char	*str1;
	const char	*str2;

	str1 = "bonjour";
	str2 = " tout le monde";
	str_final = ft_strjoin(str1, str2);
	printf("%s\n", str_final);
	return (0);
}*/
