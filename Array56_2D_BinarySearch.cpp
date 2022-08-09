#include <iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int i, j, n, row, col, target;

    // i  = row
    // j  = column
    cout << "Enter the no of rows for a square matrix\n";
    cin >> row;

    cout << "Enter the no of col for a square matrix\n";
    cin >> col;

    cout << "Enter the element you want to search\n";
    cin >> target;

    cout << "Enter the elements of matrix\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s)/2;
    int element;
    while (s <= e)
    {
        // element is 2D array position of elements as mid is of linear array
        element = arr[mid / col][mid % col];
        if (target == element)
        {
            cout << "Element is present\n";
            break;
        }

        else if (target < element)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    
    if(target != element)
    cout<<"Not Present\n";
    return 0;
}