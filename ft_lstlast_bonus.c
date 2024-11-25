#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst && lst->next)
        lst = lst->next;
    return (lst);
}
/*
int main(void)
{
    t_list *lst = NULL;

    int n1 = 10;
    int n2 = 20;
    int n3 = 5;

    t_list *node1 = ft_lstnew(&n1);
    t_list *node2 = ft_lstnew(&n2);
    t_list *node3 = ft_lstnew(&n3);

    ft_lstadd_front(&lst, node1);
    ft_lstadd_front(&lst, node2);
    ft_lstadd_front(&lst, node3);

    t_list *last = ft_lstlast(node1);

    printf("last : %d\n", *(int *)(last->content));

    while (lst)
    {
        t_list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }

    return (0);
}*/