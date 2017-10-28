/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010
 */

#include <stdio.h>

void    char_to_byte(char *byte, unsigned char octet)
{
    int i = 7;
    while (octet)
    {
        byte[i] = octet % 2 + '0';
        octet /= 2;
        i--;
    }
}

unsigned char byte_to_char(char *byte)
{
    unsigned char output = 0;

    while (*byte)
    {
        if(!output)
        {
            if (*byte == '1')
                output = 1;
        }
        else
        {
            output = output * 2 + (*byte - '0');
        }
        byte++;
    }
    return (output);
}

unsigned char	reverse_bits(unsigned char octet)
{
    char byte[8] = "00000000";
    char_to_byte(byte, octet);
    printf("%s\n", byte);


    char temp;
    int i = 0;
    while (i < 4)
    {
        temp = byte[i];
        byte[i] = byte[7 - i];
        byte[7 - i] = temp;
        i++;
    }
    printf("%s\n", byte);

    unsigned char output = byte_to_char(byte);
    printf("%d\n", output);
}