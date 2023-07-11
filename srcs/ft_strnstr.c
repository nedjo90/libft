/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:00:19 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/11 15:22:52 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& (i + j) < len && haystack[i + j] != '\0')
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
