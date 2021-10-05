/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:37:11 by plpelleg          #+#    #+#             */
/*   Updated: 2021/10/05 17:05:11 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			p = &((char *)s)[i];
			return (p);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		p = &((char *)s)[i];
		return (p);
	}
	return (NULL);
}
