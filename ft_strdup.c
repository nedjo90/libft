/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:20:18 by necatihan         #+#    #+#             */
/*   Updated: 2023/08/22 17:26:06 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char s1*)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = (char *) malloc((i + 1) * sizeof (char));
	return (str);
}