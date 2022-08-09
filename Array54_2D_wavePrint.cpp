#include <iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int maxElement = INT_MIN;
    int i, j, n, cSum = 0, indexLargest;

    // i  = row
    // j  = column
    cout << "Enter the no of rows and column for a square matrix\n";
    cin >> n;

    cout << "Enter the elements of matrix\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // j represents column
    // i represents rows
    for (j = 0; j < n; j++)
    {
        // even
        if (j % 2 == 0)
        {
            for(i=0;i<n;i++)
            {
                cout<<arr[i][j];
            }
        }

        else
        {
            for(i=n-1; i>=0; i--)
            {
                cout<<arr[i][j];
            }
        }
    }

    return 0;
}