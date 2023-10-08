#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num > 0) {

        // Remainder
        rem = num % 2;
        // rem = num & 1;

        // Quotient
        num /= 2;
        // num = num >> 1;

        // Ans
        ans += rem * mul;

        // Mul
        mul *= 10;
    }

    cout << ans << endl;
}