// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *


#include<bits/stdc++.h>
using namespace std;

int main() {

    int row, col, n;

    cout << "Enter the input: ";
    cin >> n;

    for(int row = 1; row <= n; row++) {

        // Print star row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        // Print Space 2n - 2row
        for(col = 1; col <= (2*n - 2*row); col++) {
            cout << "  ";
        } 
        
        // Print star row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
        
    }

    for(int row = n -1; row >= 1; row--) {
        
         // Print star row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        // Print Space 2n - 2row
        for(col = 1; col <= (2*n - 2*row); col++) {
            cout << "  ";
        } 
        
        // Print star row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
        
    }


    return 0;
}