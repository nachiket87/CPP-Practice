#include <iostream>
using namespace std;

const int mxN = 1e5;

int main(){
    int n,a[mxN],s=0;
    cin>>n;
	for(int i=0 ; i<n ; i++)
		cin>>a[i];
	
	for(int i=0 ; i<n ; i++){		
		if(a[i]%2==0)
			{s++;   a[i]/=2; }
		else
			break;
	if(i==n-1)i=-1;
	}
	cout<<s/n;
}