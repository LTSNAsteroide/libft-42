/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:58:13 by rfolio            #+#    #+#             */
/*   Updated: 2022/11/22 10:29:46 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	start;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i != start)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		start;
	int		j;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!res)
		return (NULL);
	start = 0;
	i = 0;
	j = -1;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i != start && (s[i] == c || s[i] == '\0'))
			res[++j] = ft_substr((char *)s, start, i - start);
	}
	res[ft_count(s, c)] = 0;
	return (res);
}

/*int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("UN_DEUX_TROIS", '_');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/