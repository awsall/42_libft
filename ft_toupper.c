/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.comr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:44:56 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 12:39:06 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>
#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int c;

	c = 'z';
	ft_toupper(c);
	printf("%c\n", ft_toupper(c));
	return 0;

}*/
