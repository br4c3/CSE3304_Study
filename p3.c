#include <stdio.h>
#include <math.h>

int main()
{
    unsigned char input[9];
    
    scanf("%8s", input);

    int cnt = 0;
    for (int i = 0; i < 8; ++i)
    {
        if (input[i]-'0' == 1) ++cnt;
    }

    int result = 0;
    for (int i = 1; i <= cnt; ++i)
    {
        result += pow(2, 8-i);
    }

    printf("%d\n", cnt);
    printf("%d", result);

    return 0;
}