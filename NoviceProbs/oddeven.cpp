// check if first digit is odd or even.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
   int x;
   cin >> x;
   int first = x;
   for(first=x; first>=10; first=first/10)
   {

   }
   if(first%2 == 0)
   {
       cout << "EVEN" << endl;
   }
   else
   {
       cout << "ODD" << endl;
   }
   return 0;
}