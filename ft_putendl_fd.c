#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}
/*
int main(void)
{
    ft_putendl_fd("Hello, world!", 1);
    return (0);
}*/
