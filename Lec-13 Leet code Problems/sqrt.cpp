#include<bits/stdc++.h>
using namespace std;

int sqrt(int x) {

    if(x == 0 || x == 1) 
        return x;

    int i = 1, result = 1;
    for(i = 1; i <= x; i++) {
        result = i * i;
    }
    return i - 1;

}


int main() {
    int x = 11;
    cout <<"Input any number: ";
    cin >> x;
    cout << sqrt(x) << endl;
    
    return 0;
}