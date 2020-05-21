#include <iostream>
using namespace std;
int main()
{
    long long n,a=-1,b=1,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
}