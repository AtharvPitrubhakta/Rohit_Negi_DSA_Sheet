// Second Pattern:
   
//     A
//     A B
//     A B C
//     A B C D
//     A B C D E


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row , col;

    for(row = 1; row <= 5; row++) 
    {
        for(col = 0; col < row; col++)
        {
            char name = ('A' + col);
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;

    // for(int i=1;i<=5;i++){
    //     for(int j=0;j<i;j++){
    //         char value = ('A' + j);
    //         cout<<value<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
}