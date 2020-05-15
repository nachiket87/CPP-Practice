// change input char from upper to lower
#include<iostream>

using namespace std;

int main()
{
   char *A;
   char B;
   cin >> A;
   if(isupper(*A))
   {
     B = *A + 32;
     cout << B << endl;
   }
   else
   {
       B = *A - 32;
       cout << B << endl;
   }
   return 0;
}
