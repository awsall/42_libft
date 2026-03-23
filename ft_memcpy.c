/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:49:02 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:01:58 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src && n != 0)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char src[8] = "bonjour";
	
	char dest[8];
	
	memcpy(dest, src, strlen(src) +1);
	printf("%s\n", dest);
	return 0; 
}*/
