// if statement to find which number is greater.
#include<iostream>
#include<vector>
#include<map>
#include<array>

using namespace std;

int main()
{
    int a[4][2] = {{0,25},{25,50},{50,75},{75,100}};
    float n;
    cin >> n;
    for(int i=0; i<4; ++i) 
    {
        if((n==a[i][0] && n<a[i][1]) || (n>=a[i][0]+1 && n<a[i][1]))
        {
            cout << "[" << a[i][0] << "," <<a[i][1] << "]" << endl;
        }
        if(n>=a[i][0] + 0.01 && n<a[i][0]+1)
        {
            cout << "(" << a[i][0] << "," <<a[i][1] << "]" << endl;
        }
        if(n==a[i][1])
        {
            cout << "(" << a[i][0] << "," << a[i][1] << "]";
        }
    }
    if (n > a[3][1])
    {
        cout << "out of intervals" << endl;
    }
    

    return 0;
}