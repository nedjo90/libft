/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:53:42 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/10 15:14:04 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int c);
int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[1][i])
	{
		// argv[1][i] = ft_tolower(argv[1][i]);
		// argv[1][i] = ft_toupper(argv[1][i]);
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
