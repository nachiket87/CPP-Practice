#include<iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;
    for(int j=1; j<=i; ++j)
    {
        if(j%2==0)
        {
            cout << j << endl;
        }
    }
    return 0;
}