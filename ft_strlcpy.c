/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:47:36 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:47:37 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	if (size != 0)
	{
		while (src[c] != '\0' && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main(void)
{   
    char dest[] = "";
    char src[] = "iremUlusoy";
    char t = ft_strlcpy(dest, src, 5);
    printf("%d", t);
}*/
