// Day 37 Q2
// Q74: Find the transpose of a matrix.

#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int j = 0; j < c; j++)
    {
        for(int i = 0; i < r; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
