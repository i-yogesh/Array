#include <stdio.h>
int main()
{
    int arr[50][50];
    int i, j, n, diagnolSum, rSum = 0, cSum = 0;
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
        rSum = 0;
        for (j = 0; j < n; j++)
        {
            rSum = rSum + arr[i][j];
        }
        printf("%d row's sum is %d\n",i+1,rSum);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        cSum = 0;
        for(j=0;j<n;j++)
        {
            cSum = cSum + arr[j][i];
        }
        printf("%d column's sum is %d\n",i+1,cSum);
    }
    return 0;
}