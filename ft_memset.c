/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:32:23 by awsall            #+#    #+#             */
/*   Updated: 2026/02/25 14:25:39 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	i = 0;
	tmp_ptr = (unsigned char *)s;
	while (i < n)
	{
		tmp_ptr[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char str[10] = "HELLO 42";

	ft_memset(str, 'y', 2);
	printf("%s\n", str);
	return(0);
}*/
