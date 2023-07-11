/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:01:28 by necatihan         #+#    #+#             */
/*   Updated: 2023/07/11 16:07:16 by necatihan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	if (dstsize == 0 || dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && dst_len < dst_size - 1)
		dst[dstlen++] = src[i++];
	dst[dstlen] = '\0';
	return (total_len);
}
