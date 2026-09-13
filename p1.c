#include <stdio.h>

int LED_function(int input)
{
    return 0x01 << input;
}

int main()
{
    int input;
    unsigned char LEDs;

    scanf("%d", &input);

    LEDs = LED_function(input);

    printf("LEDs = 0x%02X\n", LEDs);

    return 0;
}