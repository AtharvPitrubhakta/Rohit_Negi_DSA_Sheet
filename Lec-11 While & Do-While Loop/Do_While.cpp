#include<iostream>
using namespace std;

int main() 
{

    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1; // Initialize
    
    do {
        cout << i << endl;  
        i++; // update
    } while(i <= n); // break
}