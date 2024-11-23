/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:15:10 by hrisse            #+#    #+#             */
/*   Updated: 2024/11/13 17:15:13 by hrisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_putchar_fd(char c, int fd) 
{
    write(fd, &c, 1); 
}

void ft_putnbr_fd(int n, int fd) 
{
    long	nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd(nb % 10 + '0', fd);
}
/*
int main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    return (0);
}*/