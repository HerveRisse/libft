/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 07:37:49 by hrisse            #+#    #+#             */
/*   Updated: 2024/11/19 11:56:15 by hrisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int     main(void)
{
        char    str[] = "hello there !";
        char    str2[] = "holla there !";
        char  c = 'o';
	char	f = 'z';

        printf("%s\n", str);
        printf("%s\n", str2);
        printf("%s\n", (char *)ft_strchr(str, c));
        printf("%s\n", (char *)ft_strchr(str2, c));
	printf("%s\n", (char *)ft_strchr(str, f));
        printf("%s\n", (char *)ft_strchr(str2, f));
        return (0);
}*/
