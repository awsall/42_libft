/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:29:28 by awsall            #+#    #+#             */
/*   Updated: 2026/02/25 14:04:49 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total;
	size_t			i;
	unsigned char	*tmp;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	tmp = (unsigned char *)ptr;
	i = 0;
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (ptr);
}
/*

#include <stdlib.h>

#include <stdio.h>

int	main(void)
{
	long *buffer;

	buffer = (long *)ft_calloc( 40, sizeof( long) );
	if (!buffer)
		return (0);
	else
		printf("Allocated 40 long integers.\n");
	free (buffer);
	return (0);
}
*/
