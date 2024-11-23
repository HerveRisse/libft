#include "libft.h"

static char *ft_strcpy(char *dst, const char *src)
{
    size_t i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	return (ft_strcpy(cpy, s1));
}
/*
int main(void)
{
    const char *original = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(original);
    if (duplicate == NULL)
    {
        printf("Échec de l'allocation mémoire\n");
        return (1);
    }

    printf("og : %s\n", original);
    printf("dup : %s\n", duplicate);

    free(duplicate);
    return (0);
}*/
