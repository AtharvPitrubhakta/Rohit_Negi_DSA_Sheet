#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row , col;

    for(row = 1; row <= 5; row++) 
    {
        for(col = 5; col >= (5-(row-1)); col--)
        {
            cout << col << " ";
        } 
        cout << endl;
    }

    cout << endl;

    for(row = 1; row <= 5; row++) 
    {
        for(col = 5; col >= (5-row+1); col--)
        {
            cout << col << " ";
        } 
        cout << endl;
    }
    
}