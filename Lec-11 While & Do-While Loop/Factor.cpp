#include<iostream>
using namespace std;

int main() {

    int n, i = 1;   

    cout << "Input any number: ";
    cin >> n;

    while(i <= n) 
    {
      if(n % i == 0)
      {
        cout << i << " ";
      }
      i++;
    }
}