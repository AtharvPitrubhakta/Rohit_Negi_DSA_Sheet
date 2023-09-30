// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main() 
{
    int row , col;

    // for(row = 1; row <= 10; row++) 
    // {
    //     // for(col = 1; col <= (5-(row-1)); col++)
    //     for(col = 1; col <= (5-row+1); col++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    for(row = 5; row >= 1; row = row - 1) 
    {
        // for(col = 1; col <= (5-(row-1)); col++)
        for(col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}