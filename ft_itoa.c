/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:38:41 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/17 18:43:52 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static unsigned int	ft_size(int n)
{
	if (n > 0)
		return (0);
	return (1);
}

static unsigned int	ft_isnegative(int n)
{
	if (n > 0)
		return (n);
	return (-n);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = ft_size(n);
	nbr = ft_isnegative(nbr);
	while (n && ++size)
		n /= 10;
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
/*int main(void)
{
	char *t = ft_itoa(0);
	printf("%s", t);
}*/
