#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int totals;
    int n;
    long long s=0;
    cin >> totals;

    while(totals>0)
    {
       cin >> n;
       s += n;
       
       totals--;
    }
   s = abs(s);
   cout << s << endl; 


    return 0;
}