/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:34:03 by awsall            #+#    #+#             */
/*   Updated: 2026/09/10 11:33:13 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s, const char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return ((char *)&s[i]);
			else if (s[i] != accept[j])
				j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

char	*ft_strpbrk(const char *s, const char *accept);

int	main(void)
{
	char	*result;

	result = ft_strpbrk("hello world", "");

	if (result)
		printf("Trouve : %c\n", *result);
	else
		printf("Aucun caractere trouve\n");

	return (0);
}
