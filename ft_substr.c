/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:41:21 by plpelleg          #+#    #+#             */
/*   Updated: 2021/01/17 13:00:38 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*space;
	size_t	x;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_calloc(1, 1));
	x = 0;
	if (!s)
		return (0);
	space = malloc((len + 1) * sizeof(char));
	if (space == 0)
		return (NULL);
	while (x < len && s[start] != '\0')
	{
		space[x] = s[start];
		start++;
		x++;
	}
	space[x] = '\0';
	return (&space[0]);
}
