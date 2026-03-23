/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:01:12 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:27:41 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *src);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize -1);
		dst[dstsize -1] = 0;
	}
	return (src_len);
}
/*
int	main()
{
	char dest[10];
	//char dest2[10];

	const char *source = "Bonjour";
	ft_strlcpy(dest, source, 25);
	//strncpy(dest2, source, 25);
	printf("%s\n", dest);
	return 0;
}*/
