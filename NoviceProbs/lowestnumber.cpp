#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    int n, smallest_number, smallest_location=0;
    cin >> n;

    for(int j=0; j<n; ++j)
    {
        int i;
        cin >> i;
        a.push_back(i);
    }

    smallest_number = a[0];
    smallest_location = 1;
    for(int z=0; z<=a.size()-1; ++z) 
    {
        if(a[z]<smallest_number)
        {
            smallest_number = a[z];
            smallest_location = z+1;
        }
    }
 cout << smallest_number << " " << smallest_location; 
}