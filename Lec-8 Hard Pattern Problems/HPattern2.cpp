//         1 
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5 

#include<bits/stdc++.h>
using namespace std;

int main() {

    int i , j , n;
    cout << "Input any number: ";
    cin >> n;

    for(i = 1; i <= n; i++) {

        // To print space
        for(j = 1; j <= (n-i); j++) {
            // Two spaces beacause of first space is equivalent to star and second space "* " <- this space is equivalent. & you do not take this space the output is different.
            cout << "  ";
        }

        // To print numbers 
        for(j = 1; j <= i; j++) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
