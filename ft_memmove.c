/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:45:56 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:05:19 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	c_src = (char *)src;
	c_dest = (char *)dest;
	i = 0;
	if (c_dest > c_src)
	{
		while (n-- > 0)
			c_dest[n] = c_src[n];
	}
	else
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}

/*
int	main()
{
	char x[] = "lorem ipsum dolor sit amet";
	char *y = x + 1;
	ft_memmove(x, y, 8);
	printf("%s\n", x);
	printf("%s\n", y);
	char z[] = "lorem ipsum dolor sit amet";
	char *t = x + 1;
	memmove(z, t, 8);
	printf("%s\n", z);
	printf("%s\n", t);
	return 0; 	
}
*/
