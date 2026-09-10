/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:58:43 by awsall            #+#    #+#             */
/*   Updated: 2026/08/18 14:11:15 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	seen[256] = {0};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (seen[(unsigned char)argv[1][i]] == 0)
			{
				seen[(unsigned char)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (seen[(unsigned char)argv[2][i]] == 0)
			{
				seen[(unsigned char)argv[2][i]] = 1;
				write(1, &argv[2][i], 1);
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
