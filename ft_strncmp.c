/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:51:14 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 13:50:48 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (0);
	while ((s1[len] || s2[len]) && len < n)
	{
		if ((unsigned char) s1[len] != (unsigned char) s2[len])
			return ((unsigned char) s1[len] - (unsigned char) s2[len]);
		len++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;
	size_t	i;

	i = 8;
	const char str1[10] = "abcdefghij";
	const char  str2[10] = "abcdefgHij";
	result = ft_strncmp(str2, str1, i);
	printf("%d\n", result);
	
	return (0);
}*/
