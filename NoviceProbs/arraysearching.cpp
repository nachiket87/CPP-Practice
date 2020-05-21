#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int num, y;
    cin >> num;
    vector <int> x;
    int index;
    while(num > 0)
    {
        cin >> y; 
        x.push_back(y);
        num--;
    }
    int number_to_find;
    cin >> number_to_find;
    vector<int>::iterator it = find(x.begin(), x.end(), number_to_find);
    
    index = distance(x.begin(), it);
    if(it != x.end())
    {
        cout << index;
    }
    else
    {
       cout << -1 << endl; 
    }
    
}