#include<iostream>
using namespace std;

int main() 
{
  
  int n;
  cout << "Input any number: ";
  cin >> n;

  for(int i = 1; i <=n; i++) 
  {
    if(n % i == 0) 
    {
      cout << i << " ";
      
    }
  }

  return 0;

}


// int main() {

//     int n, i = 1;   

//     cout << "Input any number: ";
//     cin >> n;

//     while(i <= n) 
//     {
//       if(n % i == 0)
//       {
//         cout << i << " ";
//       }
//       i++;
//     }

        return 0;
// }
