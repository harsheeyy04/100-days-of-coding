#include <stdio.h>

int main()
{
    int arr[100], n, i, value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(value < arr[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
