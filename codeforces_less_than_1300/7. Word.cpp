#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int small = 0;
    int big = 0;
    int i = 0;
    while (word[i] != '\0')
    {
        if(word[i] >= 97 && word[i] <= 122)
        {
            small++;
        }
        else if (word[i] >= 65 && word[i] <= 90)
        {
            big++;
        }
        i++;
    }

    if (small >= big)
    {
        int i = 0;
        while (word[i] != '\0')
        {
            if(word[i] >= 65 && word[i] <= 90)
            {
                int val = word[i];
                char c = 97 + (val - 65);
                word[i] = c;
            }
            i++;
        }
    }
    else {
        int i = 0;
        while (word[i] != '\0')
        {
            if(word[i] >= 97 && word[i] <= 122)
            {
                int val = word[i];
                char c = 65 + (val - 97);
                word[i] = c;
            }
            i++;
        }
    }
    cout << word;
}
