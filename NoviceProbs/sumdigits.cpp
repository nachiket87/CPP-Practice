#include <iostream>
using namespace std;
int main(){
    int s, sum=0;
    string a;
    cin>>s>>a;
    for (int i=0;i<s;i++)sum+=a[i]-48;
    cout<<sum;
}