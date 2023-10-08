#include<iostream>
using namespace std;

int main()
{

    int  num;
    cout <<"Enter the number: ";
    cin >> num;

    int mul = 1, ans = 0, rem;

    while(num > 0) {

        // Remainder
        rem = num % 10;
        // Number ko divide kr do
        num /= 10;
        // Answer
        ans += mul * rem;
        // Multiply
        mul *= 2;
    }

    cout << ans << endl;
}