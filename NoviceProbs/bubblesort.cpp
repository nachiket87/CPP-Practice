#include<iostream>
#include<array>

using namespace std;

const int mxN = 1e5;

int main()
{
    int i;
    cin >> i;
    int b[i];
    int larger;

    for(int j=0; j<=i-1; j++)
    {
        int a;
        cin >> a;
        b[j] = a;
    }
    for(int j=0; j<=i-1; j++)
    {
        for(int k=0; k<=i-1; k++)
        {
            if(b[j] > b[k])
            {
               larger = b[j];
               b[j] = b[k];
               b[k] = larger;
            }
        }

    }
    while(i--) 
    {
        cout << b[i] << " ";
    }
    return 0;
}
