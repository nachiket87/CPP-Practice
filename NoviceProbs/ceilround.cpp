// learn ceil, round, floor function

#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    cout << "floor: " << floor(a/b) << endl;
    cout << "ceil: " << ceil(a/b) << endl;
    cout << "round: " << round(a/b) << endl;
    return 0;
}