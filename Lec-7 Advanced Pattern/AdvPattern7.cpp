// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

#include<iostream>
using namespace std;

int main()
{
    int row , col;

    for(row = 5; row >= 1; row = row - 1) 
    {
        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(row = 1; row <= 5; row++) 
    {
        for(col = 1; col <= (5-row+1); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(row = 1; row <= 5; row++) 
    {
        for(col = 1; col <= (5-(row-1)); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }   
}