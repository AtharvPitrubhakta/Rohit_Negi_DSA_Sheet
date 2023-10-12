#include<iostream>
using namespace std;

// bool Prime(int n)
// {
//     if(n < 2)
//     return 0;

//     for(int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         return 0;
//     }
//     return 1;
// }

void Prime(int n)
{
    if(n < 2)
    {
        cout << 0 << endl;
        return ;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cout << 0 << endl;
            return ;
        }

        cout << 1 << endl;
        return ;
    }
}
int Fact(int n = 3) // Default Parameter
{
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans; 
}

int main() 
{
    int a, b;
    cout <<"Enter the number: ";
    cin >> a >> b;

    cout << Fact();
    cout << endl;

    // A is prime or not
    // cout << Prime(a) << endl;
    Prime(a);

    // A ka Factorial
    cout << Fact(a) << endl;

    // B is prime or not
    // cout << Prime(b) << endl;
    Prime(b);
    
    // B ka Factorial
    cout << Fact(b) << endl;

    // B-A is prime or not
    // cout << Prime(b - a) << endl;
    Prime(b - a);

    // B-A ka Factorial
    cout << Fact(b - a) << endl;

}