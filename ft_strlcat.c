/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:20:52 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/18 15:45:23 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

/*strlcat function adds src to dest. 
*if dest has 3 elements, src has 5 elements, *and size 
(the number of size we want to have in final) is 4, then as final *array
*we will have 3 from dest, 1 from src
*/

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (!destsize)
		return (slen);
	else if (destsize < dlen)
		return (slen + destsize);
	else
	{
		i = 0;
		while (src[i] != '\0' && (dlen + i) < destsize - 1)
		{
			dest[dlen + i] = src[i];
			i++;
		}
		dest[dlen + i] = '\0';
		return (dlen + slen);
	}
}
/*size is designed to identify the max length of the dest
* in total, actually since src will goes to dest's last
*/
/*int main(void)
{   
    char dest[] = "Dear";
    char src[] = "iremUlusoy";
    char t = ft_strlcat(dest, src, 3);
    printf("%d", t);
}*/
