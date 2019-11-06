#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    int count = 0;
    while(num > 0)
    {
        int last_digit = num % 10;
        if (last_digit == 7 || last_digit == 4)
        {
            count += 1;

        }
        num = num/10;
    }
    if(count == 7 || count == 4)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
