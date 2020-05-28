#include<iostream>

using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
 
    int i,t,n;
    cin>>t;
    while(t--){
    cin>>n;
    long long int sum=0;
    int a,c;
    int b;
 
    for(i=0;i<n;i++)
    {
        cin>>a;
 
 
        if(i==0)
        c=1;
        else if(b<=a)
        c++;
        else
        c=1;
        b=a;
        sum+=c;
 
    }
 
 
    cout<<sum<<endl;
    }
 
}