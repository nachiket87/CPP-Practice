#include<iostream>

using namespace std;

int main(){
long long n;
cin>>n;
while(n--){
 long long size;
 cin>>size;
 long long a[size];
 for(int i=0;i<size;i++){
    cin>>a[i];
 }
 for(int i=0;i<=size;i++){
    for(int j=i+1;j<=size;j++){
        cout<<*max_element(a+i,a+j)<<" ";
    }
 }
 cout<<endl;
}
 
 
 
}