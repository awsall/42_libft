/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:14:02 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:37:44 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	int c;

	c = 'G';
	ft_tolower(c);
	printf("%c\n", ft_tolower(c));
	return 0;
 }*/
