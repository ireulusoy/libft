/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:40:42 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/18 15:49:25 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (!s || (unsigned int)ft_strlen(s) < start || len > 2147483647)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
//if s is null, there is nothing to be copied to dest
//starting index cannot exceed the length of s 
//&& the index can only go up to the last index of 
//s && i should be lower than len -len is gived by the user.  
int main(void)
{
	char arr[] = "source";
	char *t = ft_substr(arr, 1, 4);
	printf("%s", t);
}*/
