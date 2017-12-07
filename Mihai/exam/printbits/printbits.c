#include <unistd.h>
void    print_bits(unsigned char octet)
{
    int    i = 128;

    while (octet >= 0 && i)
    {
        if (octet / i) 
        { 
            write (1, "1", 1); 
            octet = octet - i; 
        }
        else 
            write(1, "0", 1);
        i /= 2;
    }
}

int main()
{
  print_bits(25);
}