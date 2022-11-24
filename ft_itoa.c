/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:14:21 by rfolio            #+#    #+#             */
/*   Updated: 2022/11/14 21:42:26 by rfolio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_slen(int nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	tmp;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	len = ft_slen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (tmp < 0)
	{
		str[i++] = '-';
		tmp *= -1;
	}
	str[len--] = '\0';
	while (len >= i)
	{
		str[len--] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (str);
}
