// First Pattern:
       
//      1
//      1 2
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5 
//      1 2 3 4 5 6 

#include<iostream>
using namespace std;

int main()
{
    int row , col;

    for(row = 1; row <= 6; row++) 
    {
        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    } 
}