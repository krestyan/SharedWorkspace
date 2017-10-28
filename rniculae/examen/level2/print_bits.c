void print_bits(char octet)
{
    int i = 128;

    while(octet >= 0 && i)
    {
        (octet/i) ? write(1, "1", 1) : write(1, "0", 1);
        (octet/i) ? octet -= i : 0;
        i /= 2;
    }
}



int main(){     print_bits('c');    }