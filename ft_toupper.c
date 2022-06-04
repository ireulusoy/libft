/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:25:30 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 20:25:32 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*int main(void)
{
    int t = ft_toupper(97);
	you can decleare t as int or char both
    printf("%d", t);
//if it is %c, it prints A, if it is %d, it prints 65(ascii value of A)
}*/
