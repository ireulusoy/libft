/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:41:06 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:41:08 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

//copy memory area (from src to dest)
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((dest == src) || !n)
		return (dest);
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char arr1[] = "sun"; //declearing array's type as void is not allowed.
	char arr2[] = "mooshine";
	char *t = ft_memcpy(arr2, arr1, 3); //you can decleare its type as void too
	printf("%s", t);

}*/
