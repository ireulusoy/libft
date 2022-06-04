/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:02:54 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 19:03:14 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1);
	return (0);
}
/*int main(void)
{
    int t = ft_isalpha('a');
    printf("%d", t);
}*/
// if you define char as ascii, it takes its ascii corresponding
