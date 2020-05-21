#include<iostream>

using namespace std;

int main(){
int a,b;
cin>>a>>b;
string s;
cin>>s;
int c=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='-'){
        c++;
    }
}
if(s[a]=='-'&&c==1){
   cout<<"Yes";
}
else
    cout<<"No";
 
 
 
 
 
}