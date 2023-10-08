#include<bits/stdc++.h>
using namespace std;

bool LeapYear(int year)
{
    if(year % 400 == 0)
        return 1;
    else if(year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
    cout<<endl;
};


int main()
{
    int year;
    cout << "Enter the input: ";
    cin >> year;

    cout << LeapYear(year) << endl;
}
