// add units digit of two input numbers (example: input: 12,13 - output : 5)
#include<iostream>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    int x;
    M = M % 10;
    N = N % 10;
    x = M + N;
    cout << x << endl;
    return 0;
}