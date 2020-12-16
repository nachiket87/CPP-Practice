#include<iostream>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
   int x, y=5;
   cin >> x;
   int count = 0;
   int steps=0;
   while(x>0) 
   {
       if(x>=y)
       {
          steps = steps + x/y;
          x = x%y; 
       }
       else
       {
           y=x%y;
       }
       
      
   }
   cout << steps;
}