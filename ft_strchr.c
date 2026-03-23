/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:38:10 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:19:00 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)

{
	int	i;

	c = c % 256;
	i = 0;
	while (s[i])
	{
		if ((int)s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (NULL);
}
/*
int	main()
{
	const char str[] = "ALOHA";
	char *str2;
	str2 = ft_strchr(str, 321);
	printf("%s\n", str2);
	return 0;

}*/
