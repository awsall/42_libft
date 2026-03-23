/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:13:08 by awsall            #+#    #+#             */
/*   Updated: 2026/02/10 11:57:06 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	mi_funcion;
	int	el_digito;

	el_digito = 3;
	mi_funcion = ft_isdigit(el_digito);
	printf("mi_funcion = %d\n", mi_funcion);
	return (0);
}*/
