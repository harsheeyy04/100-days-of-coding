// Day 40 Q1
// Q79: Perform diagonal traversal of a matrix

#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j, sum;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(sum = 0; sum <= rows + cols - 2; sum++)
    {
        if(sum % 2 == 0)
        {
 
            for(i = rows - 1; i >= 0; i--)
            {
                j = sum - i;

                if(j >= 0 && j < cols)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
       
            for(i = 0; i < rows; i++)
            {
                j = sum - i;

                if(j >= 0 && j < cols)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
