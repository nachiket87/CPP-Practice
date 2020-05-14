// if statement to find which number is greater.
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
   int A, B, C;
   cin >> A >> B >> C;
   cout << max(A, max(B,C)) << endl;
   cout << min(A, min(B,C)) << endl;
   return 0;
}