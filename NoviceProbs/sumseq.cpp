// find sum of numbers between given ranges
#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main()
{
    int n, m; 
    vector <array<int, 2> > x; 
    int total;
    while(n > 0 && m > 0)
    {
        cin >> n >> m;
        x.push_back({min(m,n),max(n,m)});
    }
    for(int i=0; i<x.size()-1; ++i)
    {
        for(int j=x[i][0]; j<=x[i][1]; j++)
        {
            total += j;
            cout << j << " ";
        }
        cout << "sum of " << i+1 << " is " << total << endl;
        total = 0;
    }
    return 0; 

}