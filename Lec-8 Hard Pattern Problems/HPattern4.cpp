//         A
//       A B
//     A B C
//   A B C D
// A B C D E



#include<iostream>
using namespace std;

int main()
{
    int row , col;
    int n;
    cout << "Input any number: ";
    cin >> n;

    for(row = 1; row <= n; row = row + 1) {

        for(col = 1; col <= (n - row); col = col + 1) {
            cout << "  ";
        }
        
        // for(col = 1; col <= row; col++) {
        //     char value = 'A' + (col -1);
        //     cout << value << " ";
        // }

        for(char value = 'A'; value <= 'A' + (row - 1); value++) {
            cout << value << " ";
        }
        
        cout << endl;
    }
}