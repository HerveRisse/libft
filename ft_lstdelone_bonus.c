#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return;
    if (del)
        del(lst->content);
    free(lst);
}
/*
void del(void *content)
{
    free(content);
}

int main(void)
{
    int *num = malloc(sizeof(int));
    *num = 42;

    t_list *lst = ft_lstnew(num);

    ft_lstdelone(lst, del);

    return (0);
}*/