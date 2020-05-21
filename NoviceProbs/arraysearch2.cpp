#include<iostream>
#include<vector>

using namespace std;

int check_if_there(vector<int> x, int number_to_find)
{
    int ok=-1;
    for(int i=0; i<= x.size()-1; ++i)
    {
        if(x[i] == number_to_find)
        {
           return i; 
        }
    }
   return -1;
}

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
    cout << check_if_there(x, number_to_find);
   return 0; 
}