// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int row , col;

    for(row = 1; row <= 12; row++)
    {
        for(col = 1; col <= row; col++) 
        {
            cout << row << " ";
        }
        cout << endl;
    }
    
}