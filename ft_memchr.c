/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:56:58 by awsall            #+#    #+#             */
/*   Updated: 2026/02/28 14:14:41 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp_ptr;
	char	w;
	size_t	i;

	i = 0;
	w = (char) c;
	tmp_ptr = (char *)s;
	while (i < n)
	{
		if (tmp_ptr[i] == w)
			return ((void *) &tmp_ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*result;
	char	*result2;
	char	str[7] = "bonjour";

	result = ft_memchr(str, 'n', 4);
	printf("%p\n", result);

	result2 = memchr(str, 'n', 4);
	printf("%p\n", result2);

	return (0);
}
*/
