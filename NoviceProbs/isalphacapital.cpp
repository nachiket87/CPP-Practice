// check if an input is a alphabet or digit: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include <cctype>
#include <iostream>

using namespace std;

int main()
{
   char *x;
   cin >> x;
   if (isalpha(*x))
   {
       cout << "ALPHA" << endl;

    if (isupper(*x))
    {
        cout << "IS CAPITAL" << endl;
    }
   }
   else
   {
       cout << "IS DIGIT" << endl;
   }
   return 0; 
}