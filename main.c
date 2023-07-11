/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:53:42 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/11 15:21:28 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strrchr  = %s\nft_strrchr = %s", strchr(argv[1], (int)(argv[2][0])), 
		ft_strchr(argv[1], (int)(argv[2][0])));
	return (0);
}
