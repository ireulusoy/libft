/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:40:42 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 20:40:45 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
/*
*if any element in the set is included in the beginning 
*or ending of the s1, they will be deleted
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr (set, *s1) && *s1 != '\0')
	{
		s1++;
	}
	size = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size]) && size != 0)
		size--;
	return (ft_substr((char *)s1, 0, size + 1));
}
/*int main(void)
{
	char arr[] = "ttable";
	char set[] = "te";
	printf("%s", ft_strtrim(arr, set));
	//in the set, we search for the first element of s1.
	//if the first index is in set, that means it will should be deleted. (line 26)
	//pointer now points to the index that we want it to be started (line 28)
	//pointer does not change, so i the end we still have the undesired elements.
	//not to see them in the result, I will use substr and go up to the size
	//which I decreased until the desired point(line 32)
	//the last input is length not index. 
	So to make that index be included, I increased size+1 (line 33)

}*/