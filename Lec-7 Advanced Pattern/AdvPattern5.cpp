// a
// b b
// c c c
// d d d d
// e e e e e


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row , col;
    char name = 'a';

    for(row = 1; row <= 5; row++) 
    {
        for(col = 1; col <= row; col++) 
        {   
            name = 'a' + (row - 1);
            cout << name << " ";
        }
        cout << endl;
    }
}