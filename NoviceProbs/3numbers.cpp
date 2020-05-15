// sort 3 numbers and return in order.
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr+3);
    for(size_t i=0; i!=3; ++i)
    {
        cout<< arr[i] << endl;
    }
    return 0;
}