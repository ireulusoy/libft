/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:34:27 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:34:43 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
/*this function fills memory with a constant byte (with int c variable)
*void *str indicates that we dont know the str's type, it could be anything.
*since we dont know its type, we cannot predict the functions return type,
*so it is void too
*n's type is size_t, so I decleared i as size_t too since
I will compare them in while loop*/

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}
/* first * is to reach the content*/

/* (unsigned char *) is for casting.
  it was void before, then it turns to unsigned char,
  since it is poiner, do not forget to put */

/*int main(void)
{
	unsigned char arr[] = "computer";
	char *t;
	t = ft_memset(arr, 97, 5);//97 corresponds to a
	printf("%s", t);
}*/
