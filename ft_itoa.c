/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:54:39 by plpelleg          #+#    #+#             */
/*   Updated: 2021/01/19 12:31:02 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		dig(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char		*special(int n)
{
	char	*val;
	char	*str;
	int		i;

	str = "-2147483648";
	if (n == 0)
	{
		if (!(val = malloc(1 * sizeof(char) + 1)))
			return (NULL);
		val[0] = '0';
		val[1] = '\0';
		return (val);
	}
	if (!(val = malloc(11 * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (i <= 10)
	{
		val[i] = str[i];
		i++;
	}
	val[11] = '\0';
	return (val);
}

static char		*add_nul(char *str, int idx)
{
	str[idx] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		neg;
	int		len;
	int		val;

	neg = 0;
	val = n;
	len = dig(n) - 1;
	if (n == -2147483648 || n == 0)
		return (special(n));
	if (n < 0)
		n = -n;
	if (n != val)
		neg = 1;
	if (!(result = malloc(len + 1 * sizeof(char) + 1)))
		return (NULL);
	if (neg == 1)
		result[0] = '-';
	while (len >= neg)
	{
		result[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (add_nul(result, dig(val)));
}
