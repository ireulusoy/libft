/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:40:42 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/18 15:44:01 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
/*the function is void and *f is void.
*Nothing to return so just send it to the inside function
*without returning back
*/
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}
/*while(s[i]) //same with the above while loop
	{
		f(i++, &s[i++]);
}*/
