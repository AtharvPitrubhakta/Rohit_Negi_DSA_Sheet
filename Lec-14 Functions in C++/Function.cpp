#include<iostream>
using namespace std;

// int Sum(int x , int y) // Function Declare
// {
//     int ans = x + y; // Function Define
//     return ans;
// }
        // OR
void Sum(int x , int y) // Function Declare
{
    int ans = x + y; // Function Define
    cout << ans;
}

int Mul(int m, int n)
{
    int ans = m * n;
    return ans;
}

void fun()
{
    cout << "Hello Coder Army \n";
}


int main() 
{
    int a, b;
    cout <<"Enter two numbers: ";
    cin >> a >> b;

    // Function called
    // cout << Sum(a , b);
            // OR
    // int ans = Sum(a , b);
    // cout << ans;
            // OR
    Sum(a , b);

    cout << endl;
    cout << Mul(a , b);
    cout << endl;
    fun();
}