// 1: Find the cube of a number using Function. 

#include<bits/stdc++.h>
using namespace std;

int NCube(int n)
{
    return (n * n * n);

    if(n == 0)
        return 0;
}

int main()
{
    int a;
    cout << "Input any number: ";
    cin >> a;

    cout << NCube(a) << endl;
    
}