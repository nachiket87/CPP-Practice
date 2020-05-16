#include<iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;
    for(int j=1; j<=12; j++)
    {
        cout << i << " * " << j << " = " << j*i << endl;
    }
    return 0;
}