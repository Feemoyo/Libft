/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 13:54:28 by fmoreira          #+#    #+#             */
/*   Updated: 2021/06/10 15:46:01 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 + *s2) != 0)
	{
		if ((unsigned char)(*s1) != (unsigned char)(*s2))
		{
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		}
		n--;
		s1++;
		s2++;
	}
	if (n != 0 && (unsigned char)(*s1) != (unsigned char)(*s2))
	{
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
	}
	return (0);
}
