/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <odursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:41:06 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 20:18:33 by odursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
//finds the first occurence of s2 in s1
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			if (s1[i + j] == '\0' && s2[j] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
//s2:goz-s1:gozluk --->gozluk -> line 34
//both is empty -> line 30
//s2 is empty--> gozluk
/*int main(void)
{
    char s1[] = "gozluk";
    char s2[] = "goz";
    char *t = ft_strnstr(s1, s2, 6);
    printf("%s", t);
    //printf("%s", &s1[2]); //-->this gives the pointer after 2nd index: zluk
}*/