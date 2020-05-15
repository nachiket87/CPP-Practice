// find what quadrant the number is input is in.
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
   float X, Y;
   cin >> X >> Y; 
   if(X>0 && Y>0)
   {
       cout << "Q1" << endl;
   }
   else if(X>0 && Y < 0)
   {
       cout << "Q4" << endl;
   }
   else if(X < 0 && Y > 0)
   {
       cout << "Q2" << endl;
   }
   else if(X < 0 && Y < 0)
   {
       cout << "Q3" << endl;
   }
   return 0;
}