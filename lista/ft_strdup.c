/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 13:38:01 by awsall            #+#    #+#             */
/*   Updated: 2026/08/19 17:54:51 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char *dup;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*dup;

	dup = ft_strdup("Hello 42");
	printf("Original : %s\n", "Hello 42");
	printf("Duplicate : %s\n", dup);
	free(dup);
	return (0);
}
