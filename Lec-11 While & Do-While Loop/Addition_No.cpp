#include<iostream>
using namespace std;

int main() {

    int i = 1;
    int sum = 0;

    do 
    {      
        i++;
        sum = sum + i;
        cout << sum << endl;

    }while(i <= 10);

    return 0;
}