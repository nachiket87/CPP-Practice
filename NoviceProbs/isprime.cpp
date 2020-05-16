#include<iostream>
#include<vector>

using namespace std;

string is_prime(int &n)
{
    for(int i=2; i<n; ++i){
        if(n%i == 0)
        {
           return "NO";
        }
    }
    return "YES";
}

int main()
{
    int num;
    cin >> num;
    cout << is_prime(num)<< endl;

    return 0; 
}