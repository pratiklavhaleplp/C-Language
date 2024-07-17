#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fahr, celsius;

    fahr = LOWER;

    for (fahr = 0.0; fahr <= UPPER; fahr = fahr + STEP)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
    return 0;
}
