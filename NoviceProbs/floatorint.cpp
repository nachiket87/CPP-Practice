// find out if a number is an integer or a float. 35.0 should be returned as an int.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
   float A;
   cin >> A;
   int b = A;
   if((A-b) == 0)
   {
       cout << "integer: " << b << endl;
   }
   else
   {
       cout << "float: " << A << endl;
   }
   return 0;
}