/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:02:30 by plpelleg          #+#    #+#             */
/*   Updated: 2021/10/05 17:06:30 by plpelleg         ###   ########.fr       */
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
	space = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!space)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i] != '\0')
		space[x++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		space[x++] = s2[i++];
	space[x] = '\0';
	return (&space[0]);
}
