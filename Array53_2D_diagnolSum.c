#include <stdio.h>
int main()
{
    int arr[50][50];
    int i, j, n, diagnolSum;
    printf("Enter the order\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < n; i++)
    {
        diagnolSum = diagnolSum + arr[i][i];
    }

    printf("Sum of diagnol elements is %d", diagnolSum);

    return 0;
}