#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int maxCount = 0, mostRepeated = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            mostRepeated = i;
        }
    }

    printf("Most repeated digit = %d", mostRepeated);

    return 0;
}
