#include <iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int i, j, n, row, col;

    // i  = row
    // j  = column
    cout << "Enter the no of rows for a square matrix\n";
    cin >> row;

    cout << "Enter the no of col for a square matrix\n";
    cin >> col;

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

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    int count = 0;
    int total = row * col;

    while (count < total)
    {

        //Print Starting Row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            cout << arr[startingRow][index];
            count++;
        }
        startingRow++;

        //Print Ending Column
        for(int index = startingRow; count<total && index<=endingRow; index++)
        {
            cout << arr[index][endingCol];
            count++;
        }
        endingCol--;

        //Print Ending Row
        for(int index = endingCol; count<total && index>=startingCol; index--)
        {
            cout<<arr[endingRow][index];
            count++;
        }
        endingRow--;

        //Print Starting Column
        for(int index = endingRow; count<total && index >=startingRow; index--)
        {
            cout<<arr[index][startingCol];
        }
        startingCol++;

    }
           
}