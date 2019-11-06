#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int i = 0;
    if(word[0] >= 97 && word[0] <= 122)
    {
        int val = word[0];
        char c = 65 + (val - 97);
        word[0] = c;
    }
    cout << word;
}
