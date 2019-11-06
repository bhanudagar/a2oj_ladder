#include <iostream>
using namespace std;

string queueAtSchool(string s, int n, int t)
{
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(s[j] == 'B' && s[j + 1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j++;
            }
        }
    }
    return s;
}

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    string ans = queueAtSchool(s, n, t);
    cout << ans;
}
