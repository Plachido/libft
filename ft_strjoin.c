/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:02:30 by plpelleg          #+#    #+#             */
/*   Updated: 2021/02/03 12:48:14 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*space;
	int		i;
	int		x;

	if (!s1 || !s2)
		return (NULL);
	if (!(space = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		space[x] = s1[i];
		x++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		space[x] = s2[i];
		i++;
		x++;
	}
	space[x] = '\0';
	return (&space[0]);
}
