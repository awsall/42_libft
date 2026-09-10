/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:24:00 by awsall            #+#    #+#             */
/*   Updated: 2026/08/18 15:49:05 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
			while (argv[1][i])
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					write(1, "_", 1);
					argv[1][i] = argv[1][i] + 32;
				}
				write(1, &argv[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}
