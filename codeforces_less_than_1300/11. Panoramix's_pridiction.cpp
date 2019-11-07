#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    for(int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    bool isPrime = checkPrime(m);
    if (isPrime == true)
    {
        bool ans = false;
        for(int i = n+1; i <= m; i++)
        {
            if(i == m)
            {
                cout << "YES";
                break;
            }
            if(checkPrime(i) == true)
            {
                cout << "NO";
                break;
            }

        }
    }
    else{
        cout << "NO";
    }
}
