/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:40:42 by irulusoy          #+#    #+#             */
/*   Updated: 2022/01/14 20:40:45 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//n+48 is to convert int to char

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, sizeof(char));
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		n = 147483648;
		ft_putnbr_fd (n, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n *= -1;
		ft_putnbr_fd (n, fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd (n + 48, fd);
	}
	else
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}	
}
/*int main(void)
{
	ft_putnbr_fd(1453, 1);
}*/