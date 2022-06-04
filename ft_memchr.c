/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:35:36 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:35:55 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/*this function allows us to find bytes in any type of string. 
*pointer's type is void, it can take any type then cast them to
*unsigned char to make the processes.*/
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
//function has void return type, so here casting to void -> line 26
/*
#include <stdio.h>
int main(void)
{
	char arr[] = "windows";
	void *t = ft_memchr(arr, 'o', 7);
	printf("%s", t);
}*/
