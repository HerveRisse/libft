#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
/*
int main(void)
{
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *res;

    res = ft_strjoin(s1, s2);

    if (res)
    {
        printf("res : %s\n", res);
        free(res);
    }
    return 0;
}*/