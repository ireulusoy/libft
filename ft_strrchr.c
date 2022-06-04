/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:35:36 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/18 15:46:07 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//reverse strchr
char	*ft_strrchr(const char *src, int c)
{
	if (!ft_strchr(src, (char)c))
		return (0);
	while (*src)
		src++;
	while (*src != (char)c)
		src--;
	return ((char *)src);
}
/*index is size-1 -> line 24
*casting *const char to char, since strlen takes *char -> line 21
*converting const char to char, since return type is char -> line 26
*/
/*
#include<stdio.h>
int main(void)
{
	char arr[] = "irem";
	char *t;
	t = ft_strrchr(arr, 105);
	printf("%s", t);
}*/
