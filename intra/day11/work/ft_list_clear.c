void    ft_list_clear(t_list **begin_list);
{
    t_list temp;

    if (*begin_list)
    {
        while(*begin_list)
        {
            temp = begin_list;
            begin_list = begin_list->next;
            free(temp);
        }
    }
}