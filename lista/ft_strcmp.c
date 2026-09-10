/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:12:27 by awsall            #+#    #+#             */
/*   Updated: 2026/08/14 15:22:25 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("abc", "abd"));
	printf("%d\n", ft_strcmp("abd", "abc"));
	printf("%d\n", ft_strcmp("ab", "abc"));
	printf("%d\n", ft_strcmp("abc", "ab"));
	return (0);
}
