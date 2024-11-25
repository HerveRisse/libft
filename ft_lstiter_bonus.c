#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst && f)
    {
        f(lst->content);
        lst = lst->next;
    }
}
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lst = ft_lstnew(ft_strdup("Bonjour"));
    if (!lst)
        return (1);
    lst->next = ft_lstnew(ft_strdup("Tout"));
    if (!lst->next)
        return (1);
    lst->next->next = ft_lstnew(ft_strdup("Le Monde"));
    if (!lst->next->next)
        return (1);

    ft_lstiter(lst, print_content);

    t_list *tmp;
    while (lst)
    {
        tmp = lst->next;
        free(lst->content);
        free(lst);
        lst = tmp;
    }
    return (0);
}*/