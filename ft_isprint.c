/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:43:34 by hrisse            #+#    #+#             */
/*   Updated: 2024/11/13 10:10:02 by hrisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d \n", ft_isprint(32));
	printf("%d \n", ft_isprint(33));
	printf("%d \n", ft_isprint(126));
	printf("%d \n", ft_isprint(127));
	return (0);
}*/
