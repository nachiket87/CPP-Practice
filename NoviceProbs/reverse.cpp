#include<iostream>
#include<array>

using namespace std;

const int mxN=1e5;
int b[mxN];

int main()
{
    int b[mxN];
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int a;
        cin >> a;
        b[i] = a;
    }
    reverse(b, b+n);
    for(int i=0; i<n; ++i)
    {
        cout << b[i] << " ";
    }
}