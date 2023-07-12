/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:53:42 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/12 11:45:47 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	main(int argc, char **argv)
{
	(void)argc;
	
	printf("strncat  = %s\nft_strncat = %s", strncat(argv[1], argv[2], atoi(argv[3])), 
		ft_strncat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}

