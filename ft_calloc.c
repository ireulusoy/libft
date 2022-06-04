/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:35:36 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:35:55 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t block, size_t size)
{
	void	*str;

	str = (void *)malloc(block * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size * block);
	return (str);
}
