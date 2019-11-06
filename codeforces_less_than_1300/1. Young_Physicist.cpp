#include <iostream>
using namespace std;

bool isBalanced(int **arr, int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for(int j = 0; j < row; j++)
        {
            sum += arr[j][col];
        }
        if (sum != 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{

    int size;
    cin >> size;
    int col = 3;
    int ** arr = new int*[size];
    for(int i = 0; i < size; i++)
    {
        arr[i] = new int [col];
    }
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    if(isBalanced(arr, size, 3))
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }



    // deleting
    for(int i = 0; i < col; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}
