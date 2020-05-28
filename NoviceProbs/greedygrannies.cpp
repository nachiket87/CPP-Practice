#include<iostream>
#include<vector>

using namespace std;

int main() 
{
    int t;
    vector<int> answers;
    cin>>t;
    while(t--)
    {
     int n,a=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     sort(arr,arr+n);
     for(int i=n-1;i>=0;i--)
     {
        if(arr[i]<=i+1)
        {
          a=i+1;
          break;
        }
     }
     answers.push_back(a+1);
    }
    for(vector<int>::iterator i=answers.begin(); i<answers.end(); ++i)
    {
        cout << *i << endl;
    }
}