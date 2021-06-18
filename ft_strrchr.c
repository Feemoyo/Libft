/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:21:15 by fmoreira          #+#    #+#             */
/*   Updated: 2021/06/09 14:17:44 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	s += ft_strlen(s);
	if (c == 0)
	{
		return ((char *)(s + 1));
	}
	while ((int)i >= 0)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		i--;
		s--;
	}
	return (0);
}
