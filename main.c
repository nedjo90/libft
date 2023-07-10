/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:53:42 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/10 15:23:35 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isprint(int c);

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (ft_isprint(argv[1][i]) != 0)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
