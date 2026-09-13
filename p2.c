#include <stdio.h>

int main()
{
    unsigned int LEDs = 0x01;
    
    for (int t = 0; t < 4; ++t)
    {
        for (int i = 0; i < 8; ++i)
        {
            printf("%d, ", LEDs);
            LEDs <<= 1;
        }
        for (int i = 0; i < 8; ++i)
        {
            printf("%d, ", LEDs);
            LEDs >>= 1;
        }
        printf("%d\n", LEDs);
    }

    return 0;
}