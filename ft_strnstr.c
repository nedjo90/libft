/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:00:19 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/11 11:33:22 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j]
				&& i + j < len)
			{
				if (haystack[i + j] == '\0')
					return (NULL);
				else if (needle[j] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
