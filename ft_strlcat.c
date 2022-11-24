/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:37:01 by Robin             #+#    #+#             */
/*   Updated: 2022/11/11 15:23:24 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if ((!dst || !src) && size == 0)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size || size == 0)
		return (src_len + size);
	while (src[i] && i < size - 1 - dst_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}

/*int main()
{
	char src1[] = "la populasse";
	char dst1[20] = "bonjour";

	printf("%lu\n", ft_strlcat(dst1, src1, 20));
	printf("%s", dst1);
}*/