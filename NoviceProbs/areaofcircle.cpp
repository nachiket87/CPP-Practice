// print area of circle
#include<cmath>
#include<iomanip>
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
   cout << fixed << setprecision(9);
   double pi = 3.141592653;
   int R;
   cin >> R;
   float r_square = pow(R, 2);
   cout << pi * r_square << endl;
   return 0;
    
}