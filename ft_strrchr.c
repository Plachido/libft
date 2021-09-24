/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:37:11 by plpelleg          #+#    #+#             */
/*   Updated: 2021/01/14 18:56:41 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			p = &((char*)s)[i];
			return (p);
		}
		i--;
	}
	if ((char)c == '\0')
	{
		p = &((char*)s)[ft_strlen(s)];
		return (p);
	}
	return (NULL);
}
