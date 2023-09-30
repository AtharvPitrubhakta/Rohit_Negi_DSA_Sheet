// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

#include<iostream>
using namespace std;

// int main() 
// {
//     int row , col;

//     for(row = 1; row <= 5; row++) 
//     {
//         char name = 'a' + (row - 1);

//         for(col = 1; col <= 5; col++) 
//         {
//             cout << name << " ";
//         }
//         cout << endl;
//     }
    
    // return 0;
// }


// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e


int main()
{
    // 1st approch 

    // int row;
    // char col;

    // for(row = 1; row <= 5; row++) 
    // {
    //     for(col = 'a'; col <= 'e'; col++) 
    //     {
    //         cout << col << " ";
    //     }
        
    //     cout << endl;
    // }

    // 2nd approch

    int row, col;

    for(row = 1; row <= 5; row++) {
        
        for(col = 1; col <= 5; col++) 
        {
            char name = 'a' + (col - 1);
            cout << name <<" ";
        }
        cout << endl;
    }



    return 0;
}


