#include <iostream>


int main(void)
{   
    for (int i = 0; i < 35; i++)
    {
        int a = i;
        int b = a & 0x7; // модуль числа по 7
        int c = a << 4; // повышение разряда

        printf("a = %-5d: %-5x; b = %-5d: %-5x; c = %-5d: %-5x\n", a, a, b, b, c, c);
    }
}