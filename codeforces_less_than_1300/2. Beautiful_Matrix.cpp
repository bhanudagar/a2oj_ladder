#include <iostream>
using namespace std;

int Beautiful_Matrix(int arr[][5])
{
    int moves = 0;
    int row_ans = -1;
    int col_ans = -1;
    for(int row = 0; row < 5; row++)
    {
        for(int col = 0; col < 5; col++)
        {
            if (arr[row][col] == 1)
            {
                row_ans = row + 1;
                col_ans = col + 1;
                if(row_ans <= 3)
                {
                    moves += (3 - row_ans);
                }
                else{
                    moves += (row_ans - 3);
                }
                if (col_ans <= 3)
                {
                    moves += (3 - col_ans);
                }
                else{
                    moves += (col_ans - 3);
                }
            }
        }
    }
    return moves;
}

int main()
{
    int arr[5][5];
    for (int row = 0; row < 5; row ++)
    {
        for (int col = 0; col < 5; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << Beautiful_Matrix(arr);
}
