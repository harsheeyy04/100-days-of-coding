// Day 38 Q2
// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main()
{
    int n;
    int a[10][10];
    int symmetric = 1;

    scanf("%d %d", &n, &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
