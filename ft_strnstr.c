/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:30:47 by fmoreira          #+#    #+#             */
/*   Updated: 2021/06/10 13:38:43 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == 0)
	{
		return ((char *)s1);
	}
	i = 0;
	while (s1[i] != 0)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			j++;
		}
		if (s2[j] == 0)
		{
			return ((char *)s1 + i);
		}
		i++;
	}
	return (0);
}
