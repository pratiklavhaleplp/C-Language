#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower = 0, upper = 300, step = 20;

    fahr = lower;

    for (fahr = 0.0; fahr <= 300.0; fahr = fahr + step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
    return 0;
}
