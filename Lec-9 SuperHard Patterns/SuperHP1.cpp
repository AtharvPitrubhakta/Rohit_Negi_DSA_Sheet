//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1


#include<iostream>
using namespace std;

int main() {
    
    int row, col, n;
    cout << "Enter your number: ";
    cin >> n;

    for(int row = 1; row <= n; row++) {
        // Print Spaces
        for(int col = 1; col <= (n - row); col++) {
            cout << "  ";
        }
        // Print 1 to row (increasing)
        for(int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        // Print row - 1 to 1 (decreasing)
        for(int col = row - 1; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }
}