/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:53:42 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/11 11:17:31 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strnstr(const char *haystack, char *needle, size_t len);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strnstr  = %s\nft_strnstr = %s", strnstr(argv[1], argv[2], atoi(argv[3])), 
		ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
