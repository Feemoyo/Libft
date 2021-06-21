/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:00:48 by fmoreira          #+#    #+#             */
/*   Updated: 2021/06/21 02:22:29 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long int	nn;
	long int	j;
	int	len;
	int	np;

	np = 0;
	nn = n;
	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		nn = (long int)n * -1;
		np = 1;
		len++;
    }
    j = nn;
    while (j)
    {
        j = j / 10;
        len++;
    }
    str = (char *)ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (0);
    if (np)
    {
        str[0] = 45;
    }
    str[len--] = 0;
    while (len >= 0)
    {
        j = nn % 10;
        nn = nn / 10;
        str[len] = j + '0';
        len--;
        if (len == 0 && np)
            len--;
    }
    return (str);
}
