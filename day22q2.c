#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0, term;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = 1.0;

    for(i = 2; i <= n; i++)
    {
        term = (float)(2 * i - 1) / (2 * i);
        sum = sum + term;
    }

    printf("Sum of series = %.2f", sum);

    return 0;
}
