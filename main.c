/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:43:23 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/10 14:46:50 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c);

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[1][i])
	{
		argv[1][i] = ft_tolower(argv[1][i]);
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
