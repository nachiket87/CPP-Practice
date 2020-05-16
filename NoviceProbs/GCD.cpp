#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int larger = max(n, m);
    int l = min(n,m);


    for(int smaller=min(n,m); smaller>=1; --smaller)
    {
        if(larger%smaller == 0 && l % smaller == 0)
        {
          cout << smaller <<  endl; 
          break;
        }
    }
    return 0; 
}