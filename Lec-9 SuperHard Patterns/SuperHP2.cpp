// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *


#include<iostream>
using namespace std;

int main() {
    int row, col, n;
    cout << "Enter any number: ";
    cin >> n;

    for(row = n; row >= 1; row--) {

        // Space 
        for(col = 1; col <= (n - row); col++) {
            cout  << "  ";
        }

        // Star Print
        for(col = 1; col <= (2*row-1); col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}