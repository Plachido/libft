/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:55:09 by plpelleg          #+#    #+#             */
/*   Updated: 2021/01/15 17:18:53 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*space;

	i = 0;
	while (s1[i] != '\0')
		i++;
	space = malloc(i * sizeof(char) + 1);
	if (space == 0)
		return (space);
	i = 0;
	while (s1[i] != '\0')
	{
		space[i] = s1[i];
		i++;
	}
	space[i] = '\0';
	return (space);
}
