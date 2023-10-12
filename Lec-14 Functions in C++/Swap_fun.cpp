#include<iostream>
using namespace std;

// // Pass by value
// void swap(int x, int y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;
// }

// int main()
// {
//     int a, b;
//     cout <<"Enter two numbers: ";
//     cin >> a >> b;

//     swap(a , b);
//     cout << a << " " << b;
// }

// Pass by Reference
// void swap(int &a, int &b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }

// This is function overloading means confusion in functions.
// void swap(float &c, float &d)
// {
//     float e;
//     e = c;
//     c = d;
//     d = e;
// }


int main()
{
    int a, b;
    cout <<"Enter two numbers: ";
    cin >> a >> b;

    //Swap is a Inbuilt function.
    swap(a , b);
    cout << a << " " << b <<endl;

    float f1 , f2;
    cout <<"Enter two float numbers: ";
    cin >> f1 >> f2;
    // swap ka S captial nhi hona chaiye 
    swap(f1, f2);
    cout << f1 << " " << f2;

    return 0;
}
