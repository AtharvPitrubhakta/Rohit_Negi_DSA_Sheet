// 1 
// 1 2
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int row , col;

    for(row = 1; row <= 12; row++)
    {
        for(col = 1; col <= row; col++) 
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
}