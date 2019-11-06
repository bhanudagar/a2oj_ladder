#include <iostream>
using namespace std;

int borze(string code)
{
    int i = 0;
    while (code[i] != '\0')
    {

        if(code[i] == '.')
        {
            cout << 0;
            i++;
        }
        if (code[i] == '-' && code[i + 1] == '.')
        {
            cout << 1;
            i += 2;
        }
        if (code[i] == '-' && code[i + 1] == '-')
        {
            cout << 2;
            i += 2;
        }
    }
}

int main()
{
    string code;
    cin >> code;

    borze(code);
}
