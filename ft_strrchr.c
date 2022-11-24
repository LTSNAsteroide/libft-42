/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinfolio <robinfolio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:46:36 by Robin             #+#    #+#             */
/*   Updated: 2022/11/10 14:36:16 by robinfolio       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen(s);
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (*str != (char) c)
	{
		if (str == s)
			return (NULL);
		str--;
	}
	return (str);
}
