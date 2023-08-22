/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:27:27 by necatihan         #+#    #+#             */
/*   Updated: 2023/08/22 17:35:10 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
	{
		if (i == n)
		{
			str = (char *) malloc ((i) * sizeof (char));
			return (str);
		}
		i++;
	}
	if (i + 1 <= n)
	{
		str = (char *) malloc ((i + 1) * sizeof (char));
		return (str);
	}
	else
	{
		str = (char *) malloc ((i) * sizeof (char));
		return (str);
	}
}
