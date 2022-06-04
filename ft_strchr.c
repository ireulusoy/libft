/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:35:36 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:35:55 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
//to find any byte (int c) in the string (const char *str)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (0);
}
/* casting to char from constant char,
* since return type of function is *char -> line 19
* this is the case if there is not searched variable --> line 23
* this is the case if the searched int is not in the array, 
* or array is empty -> line 24 */
/*
#include<stdio.h>
int main(void)
{
	char arr[] = "train";
	char *t = ft_strchr(arr, 'r');
	printf("%s", t);
}*/
