/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:44:50 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:44:52 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
/*memcpy might always copy addresses from low to high.
*
*If the destination overlaps after the source, this means some addresses will be overwritten before copied.
*Memmove would detect this and copy in the other direction - from high to low - in this case.
*However, checking this and switching to another (possibly less efficient) algorithm takes time.
*/
{
	size_t	i;

	i = 0;
	if (dest == src || !len)
		return (dest);
	if (dest < src)
	{	
		while (i < len)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dest + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dest);
}
/*int main(void)
{
	char arr1[] = "sun"; //declearing array's type as void is not allowed.
	char arr2[] = "mooshine";
	char *t = ft_memmove(arr2, arr1, 3); 
	printf("%s", t);
}*/
