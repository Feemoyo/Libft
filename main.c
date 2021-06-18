/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:28:42 by fmoreira          #+#    #+#             */
/*   Updated: 2021/06/13 21:39:57 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	/*char src[4]= "Oiee";
	char dest[10];
	printf("%s\n", src);
	printf("%s\n", dest);
	ft_memcpy(dest, src, 2);
	printf("%s\n", dest);
	return (0);
	*/

	/// ft_memcpy ///
/*	void	*mem = "j";
	mem = malloc(sizeof(*mem) * 30);
	memset(mem, 'j', 30);
	ft_memcpy(mem, "abcdefghijklmnopqrs", 14);
	printf("%s\n", (char *)mem);

	return (0);
*/
	char *catsrc;
	char *catdst;
	size_t cati;
	size_t catvalue;

	cati = 10;
	catdst = "Ola";
	catsrc = "td bem?";

	printf("Teste: %s %s\n", catdst, catsrc);

	catvalue = ft_strlcat(catsrc, catdst, cati);

	printf("Teste: %s %s\n", catdst, catsrc);
	printf("Value da cat: %ld\n", catvalue);
	return (0);
}
