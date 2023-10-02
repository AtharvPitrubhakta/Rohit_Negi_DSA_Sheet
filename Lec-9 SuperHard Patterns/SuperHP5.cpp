//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *



#include<iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter the input: ";
    cin >> n;

    for(row = 1; row <= n; row++) {

        // Print Spaces
        for(col = 1; col <= (n - row); col++) {
            cout << " ";
        }

        // Print * row times
        for(col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(row = n; row >= 1; row--) {

        // Print Spaces 
        for(col = 1; col <= (n - row); col++) {
            cout << " ";
        }

        // Print * row times
        for(col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}