#include<iostream>
using namespace std;


// Print Even Numbers to till given number.
// int main()
// {
//     int num;
//     cout << "Input the number: ";
//     cin >> num;
//     int i = 1;

//     while(i <= num) 
//     {   
//         if(i % 2 == 0) {
//             cout << i << " ";
//         }
//         i++;
//     }


//     return 0;
// }


// Print Even Numbers to till given number.
int main()
{
    int num;
    cout << "Input the number: ";
    cin >> num;
    int i = 1;

    while(i <= num) 
    {   
        if(i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    }


    return 0;
}
