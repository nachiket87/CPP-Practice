#include <iostream>
// uncomment when submitting #include<bits/stdc++.h>
#include<vector>
 
using namespace std;
 
int main()
{
        int n;
        cin>>n;
        vector<int> a(n), b(n);
 
       for(int i=0; i<n; i++) cin>>a[i];
       for(int i=0; i<n; i++) cin>>b[i];
 
      sort(a.begin(), a.end());
       sort(b.begin(), b.end());
 
     if(a==b) cout<<"yes"<<endl;
     else cout<<"no"<<endl;
 
    return 0;
}