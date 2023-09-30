// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

#include<bits/stdc++.h>
using namespace std;

int main() {

    // int row , col;

    // for(row = 1; row <= 5; row++) 
    // {
    //     for(col = 1; col <= 5; col++) 
    //     {
    //         cout << col * col<<" ";
    //     }

    //     cout << endl;
    // }

// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125

    int row , col;

    for(row = 1; row <= 5; row++) 
    {
        for(col = 1; col <= 5; col++) 
        {
            cout << col * col * col <<" ";
        }

        cout << endl;
    }




    return 0;
}