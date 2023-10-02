// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * *
// * *             * *
// *                 * 
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

#include<iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Input any number: ";
    cin >> n;

    for(int row = n; row >= 1; row--) {
        
        // Print * row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        // Print Space
        for(int col = 1; col <= (2*n - 2*row); col++) {
            cout << "  ";
        }

        // Print * row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        
        cout << endl;
    }
    for(int row = 1; row <= n; row++) {
        
        // Print * row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        // Print Space
        for(int col = 1; col <= (2*n - 2*row); col++) {
            cout << "  ";
        }

        // Print * row times
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        
        cout << endl;
    }


    return 0;
}
