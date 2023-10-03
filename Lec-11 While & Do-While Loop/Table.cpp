#include<iostream>
using namespace std;

int main()
{
    int n;
    int i=1; // Intialization
    cout <<"Input Any Number: ";
    cin >> n;

    
    while(i <= 10) // Break 
    {
        cout << n * i << " ";
        i++; // Update
    }
    cout << endl;
}