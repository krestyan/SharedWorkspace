/*
Director de lucru: ex07/
Fisier(e) de iesire: ft_list_at.c, ft_list.h
Functii autorizate: Niciuna
Observatii: n/a
Prototip: t_list    *ft_list_at(t_list *begin_list, unsigned int nbr);

Cerinta:

• Scrieti functia ft_list_at care returneaza elementul n al listei.
• Ea returneaza un pointer nul in caz de eroare.

*/


t_list  *ft_list_at(t_list  *begin_list, unsigned int nbr)
{
    int i;

    i = 0;
    while(begin_list && i < nbr)
    {
        i++;
        begin_list = begin_list->next;
    }

    return(begin_list);
}