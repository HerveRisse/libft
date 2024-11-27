/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:58:36 by hrisse            #+#    #+#             */
/*   Updated: 2024/11/13 12:04:37 by hrisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}

/*
int	main(int ac, char **av)
{
	size_t	size;

	if (ac != 3)
		return (0);
	size = ft_strlen(av[1]) + 1;
	printf("La taille de src est : %zu \n", size);
	printf("Le contenu og de src est : %s \n", av[1]);
	printf("Le contenu og de dst est : %s \n", av[2]);
	printf("ft_strlcpy :%zu \n", ft_strlcpy(av[2], av[1], size));
	printf("Le contenu de src est : %s \n", av[1]);
	printf("Le contenu de dst est : %s \n", av[2]);
}*/
