#include <iostream>
using namespace std;

int main()
{

    int year;
    cin >> year;

    while (true)
    {
        year ++;
        int first_digit = year / 1000;
        int second_digit = year / 100 % 10;
        int third_digit = year / 10 % 10;
        int last_digit = year % 10;

        if (first_digit != second_digit && first_digit != third_digit && first_digit != last_digit && second_digit != third_digit && second_digit != last_digit && third_digit != last_digit)
        {
            break;
        }

    }
    cout << year;


//    int year;
//    cin >> year;
//
//    int first_digit = year / 1000;
//    int second_digit = (year / 100) % 10;
//    int third_digit = (year / 10) % 10;
//    int last_digit = year % 10;
//
//    if (first_digit == second_digit)
//    {
//        year += 100;
//        second_digit += 100;
//    }
//    if(first_digit == third_digit)
//    {
//        year += 10;
//        third_digit += 10;
//    }
//    if(second_digit == third_digit)
//    {
//        year += 10;
//        third_digit += 10;
//    }
//    year ++;
//    last_digit++;
//    while(true)
//    {
//        if (last_digit == first_digit || last_digit == second_digit || last_digit == third_digit || second_digit == third_digit || second_digit == first_digit || third_digit == first_digit)
//        {
//            year++;
//            last_digit ++;
//        }
//        else{
//            break;
//        }
//    }
//    cout << year;
}
