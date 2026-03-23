/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:59:18 by awsall            #+#    #+#             */
/*   Updated: 2026/03/06 13:47:22 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
//#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	y = 3;
	x = ft_isascii(y);
	printf("y = %d\n", x);
	return(0);
}*/
