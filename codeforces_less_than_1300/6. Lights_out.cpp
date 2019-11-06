#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1,1,1,1,1,1,1,1,1};

    int input [3][3];
    for(int row = 0; row < 3; row ++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin >> input[row][col];
        }
    }
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            int count = input[row][col];
            if (count % 2 == 0)
            {
                continue;
            }
            else{
                int a = row;
                int b = col;
                if (arr[a][b] == 1)
                {
                    arr[a][b] = 0;
                }
                else if(arr[a][b] == 0)
                {
                    arr[a][b] = 1;
                }
                if (arr[a-1][b] == 1)
                {
                    if(a > 0)
                        arr[a-1][b] = 0;
                }
                else if(arr[a-1][b] == 0)
                {
                    if (a > 0)
                        arr[a-1][b] = 1;
                }
                if (arr[a][b-1] == 1)
                {
                    if (b > 0)
                        arr[a][b-1] = 0;
                }
                else if(arr[a][b-1] == 0)
                {
                    if (b > 0)
                        arr[a][b-1] = 1;
                }
                if (arr[a+1][b] == 1)
                {
                    if (a < 2)
                        arr[a+1][b] = 0;
                }
                else if(arr[a+1][b] == 0)
                {
                    if (a < 2)
                        arr[a+1][b] = 1;
                }
                if (arr[a][b+1] == 1)
                {
                    if (b < 2)
                        arr[a][b+1] = 0;
                }
                else if(arr[a][b+1] == 0)
                {
                    if (b < 2)
                        arr[a][b+1] = 1;
                }


            }
//            int i = 0;
//            while (i < count)
//            {
//
//                i++;
//            }
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << arr[row][col];
        }
        cout << endl;
    }
}
