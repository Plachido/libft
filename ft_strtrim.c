/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 10:57:17 by plpelleg          #+#    #+#             */
/*   Updated: 2021/01/18 18:54:30 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(char const s1, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1)
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (in(s1[start], set) == 0)
		start++;
	while (in(s1[len - 1], set) == 0)
		len--;
	if (len == 0)
		return (ft_substr(s1, ft_strlen(s1), ft_strlen(s1)));
	return (ft_substr(s1, start, len - start));
}
