/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:35:01 by awsall            #+#    #+#             */
/*   Updated: 2026/08/15 17:56:21 by awsall           ###   ########.fr       */
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
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') ||
				 (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
				argv[1][i] = argv[1][i] + 13;
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || 
					(argv[1][i] >= 'N' &&  argv[1][i] <= 'Z'))
				argv[1][i] = argv[1][i] - 13;
			i++;
		}
		write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}



