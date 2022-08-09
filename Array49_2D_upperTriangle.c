#include<stdio.h>
int main()
{
    int arr[50][50];
    int i,j,n;
    printf("Enter the order\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Printing\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<=j)
            printf("%d\t",arr[i][j]);

            else
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}