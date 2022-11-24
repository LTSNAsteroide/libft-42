/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:43:46 by rfolio            #+#    #+#             */
/*   Updated: 2022/11/11 10:56:42 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		j;
	int		len;
	char	*ptr;

	len = ft_strlen (src);
	ptr = (char *)malloc(sizeof(char) *(len + 1));
	j = 0;
	if (!ptr)
		return (NULL);
	while (j < len)
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	char	*tab1;

	tab1 = ft_strdup(argv[1]);
	printf(":%s:\n:%s:\n", argv[1], tab1);
	return (0);
}*/
