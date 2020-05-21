#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    int* i1;
    i1 = min_element(arr, arr + n);
    long long cont = count(arr, arr+n, *i1);


    
    if(cont%2==0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }
    
}