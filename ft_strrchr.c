/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:56:56 by awsall            #+#    #+#             */
/*   Updated: 2026/02/25 14:18:08 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;
	char	w;

	i = 0;
	w = (char) c;
	result = NULL;
	while (s[i])
	{
		if (s[i] == w)
			result = ((char *) &s[i]);
		i++;
	}
	if (c == 0)
		return ((char *) &s[i]);
	return (result);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const	char *str = "Bonjour world";


	char	*str2;
	char	*str3;
	str2 = ft_strrchr(str, '\0');
	str3 = strrchr(str, '\0');
	printf("%p\n", str2);
	printf("%p\n", str3);
	return 0; 
}
*/
