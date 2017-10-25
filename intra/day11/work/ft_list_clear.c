/*
Director de lucru: ex06/
Fisier(e) de iesire: ft_list_clear.c, ft_list.h
Functii autorizate: free
Observatii: n/a
Prototip:   void ft_list_clear(t_list **begin_list)
*/

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

/*
#############################
# **begin_list #    TEST    #
#############################
#         MasterList        #
#   list1   list2   list3   #
#    x|y     x|y     x|y    #
#---------------------------#
#-- x = *data | y = *next --#
#---------------------------#
#############################

t_list *copy;
t_list *start;



 Andrei Meister
----------------
if (*begin_list)
{
    while(*begin_list)
    {
        temp = begin_list;
        begin_list = begin_list->next;
        free(temp);
    }
}


 SLOW AF
---------
if (*begin_list)
{
    while(start->next)
    {
        copy = start;
        while(copy->next) // copy->next != NULL
            copy = copy->next;
        free(copy);
    }
}
*/