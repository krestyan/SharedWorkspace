int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max;
    while (i < len)
    {
        if (i == 0)
            max = tab[i];
        else if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
}