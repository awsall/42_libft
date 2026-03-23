/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:42:47 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:24:26 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
//#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_len >= destsize)
		dest_len = destsize;
	if (dest_len == destsize)
		return (destsize + src_len);
	if (src_len < destsize - dest_len)
		ft_memcpy(dest + dest_len, src, src_len + 1);
	else
	{
		ft_memcpy(dest + dest_len, src, destsize - dest_len -1);
		dest[destsize - 1] = '\0';
	}
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dst[15] = "hello";
	const char *source = " World";

	ft_strlcat(dst, source, 13);
	printf("%s\n", dst);
	return 0;
}*/
