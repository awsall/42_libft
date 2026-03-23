/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:10:46 by awsall            #+#    #+#             */
/*   Updated: 2026/02/22 14:49:02 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	dup = malloc(sizeof(char) * (i +1));
	if (!dup)
		return (NULL);
	dup[i] = 0;
	while (i--)
		dup[i] = s1[i];
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str2;

	str = "bonjour";
	str2 = ft_strdup(str);
	if (str2 == NULL)
		return (1);
	printf("original: %s\n", str);
	printf("duplicated: %s\n", str2);
	free (str2);
	return (0);
}*/
