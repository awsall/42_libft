/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 11:38:58 by awsall            #+#    #+#             */
/*   Updated: 2026/09/10 12:29:27 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int	i;
	int	j;
	int	len;
	char	temp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

#include <stdio.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char	str[] = "hello";

	printf("Avant : %s\n", str);
	printf("Après : %s\n", ft_strrev(str));
	return (0);
}
