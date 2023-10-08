#include<iostream>
using namespace std;

int AddDigit(int num)
{
    while(num > 9)
    {
        int rem, ans = 0;
        
        while(num != 0)
        {
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        num = ans;
    }
    return num;
}
int main()
{
    int number;
    cout << "Enter the input: ";
    cin >> number;

    cout << AddDigit(number) << endl;
    
}
