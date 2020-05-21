#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int k, s, x, y, z, count=0;
  cin >> k >> s;
  if(k<s)
  {
      k = s;
  }
  for(x=0; x<=k; ++x)
  {
   for(y=0;y<=k; y++)
   {
       for(z=k-y; z>=0; z--)
       {
           if(x+y+z == s) 
           {
               count += 1;
           }
       }
   }
  }
  cout << count;
  return 0;
}