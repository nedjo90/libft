/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:08:08 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/12 11:36:38 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}