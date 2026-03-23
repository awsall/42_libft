/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 17:49:41 by awsall            #+#    #+#             */
/*   Updated: 2026/03/09 11:07:19 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_to_trimmed(char const *s1, char *trimmed_str, size_t start_i,
	size_t end_i)
{
	int	i;

	i = 0;
	while (start_i <= end_i)
	{
		trimmed_str[i] = s1[start_i];
		i++;
		start_i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_i;
	size_t	end_i;
	char	*trimmed_str;
	int		len;

	if (!set || !s1)
		return (NULL);
	if (s1[0] == 0)
		return (ft_strdup(s1));
	start_i = 0;
	end_i = ft_strlen(s1) - 1;
	while (s1[start_i] != '\0' && ft_strchr(set, s1[start_i]))
		start_i++;
	while (end_i >= start_i && ft_strchr(set, s1[end_i]))
		end_i--;
	if (start_i > end_i)
		len = 0;
	else
		len = end_i - start_i + 1;
	trimmed_str = malloc(len +1);
	if (!trimmed_str)
		return (NULL);
	copy_to_trimmed(s1, trimmed_str, start_i, end_i);
	return (trimmed_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	char	set[] = " ";
	char	*s_trimmed;

	s_trimmed = ft_strtrim(str, set);
	printf("%s\n", s_trimmed);
	free(s_trimmed);
}*/
