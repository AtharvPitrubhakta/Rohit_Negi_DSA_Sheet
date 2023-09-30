// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A

#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 4; i >= 1; i--) {

        char name = 'A';

        for(int j = 0; j < i; j++) {
            name = 'A' + j;
            cout << name << " ";
        }
        cout << endl;
    }
}