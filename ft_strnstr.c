/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:55:54 by Robin             #+#    #+#             */
/*   Updated: 2022/11/11 16:44:14 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	if ((!s1 || !s2) && n == 0)
		return (0);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s1[i + j] && s2[j])
		{
			j++;
		}
		if (!s2[j])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
	char str[] = "bonjour";
	char lol[] = "jour";

	printf("%s", ft_strnstr(str, lol, 10));
}*/