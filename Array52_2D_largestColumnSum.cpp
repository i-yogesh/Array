#include <iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int maxElement = INT_MIN;
    int i, j, n, cSum = 0, indexLargest;

    // i  = column
    // j  = row
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

    cout << endl;
    for (i = 0; i < n; i++)
    {
        cSum = 0;
        for (j = 0; j < n; j++)
        {
            cSum = cSum + arr[j][i];
            if (maxElement < cSum)
            {
                maxElement = cSum;
                indexLargest = i;
            }
            // cout<<"Column sum at "<<j<<" column is "<<maxElement<<endl;
        }
        cout<<"Column sum at "<<i<<" column is "<<cSum<<endl;
    }

    cout << "Largest Column Sum is " << maxElement << " and is at " << indexLargest << endl;
    return 0;
}