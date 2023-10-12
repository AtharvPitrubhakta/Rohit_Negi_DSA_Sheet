#include<bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n /= 10;
    }
    return count;
}

void Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;

    while(n)
    {
        rem = n % 10;
        n  /= 10;
        ans = ans + pow(rem , digit);
     }

    if(ans==num)
    // return 1;
    cout << true;
    else 
    // re`turn 0;
    cout << false;

}

int main()
{
    int num; 
    cout<<"This is Armstrong number: ";
    cin >> num;

    // countDigit
    int digit = countDigit(num);
    // Armstrong number
    // cout << Armstrong(num, digit) << endl;
    Armstrong(num, digit);

}