#include<iostream>
#include<vector>

using namespace std;

int main()    
{
    int number_of_inputs;
    vector<int> x;
    cin >> number_of_inputs;
    while(number_of_inputs--)
    {
        int y;
        cin >> y;
        x.push_back(y);
    }
    for(int i=0; i<=x.size()-1; ++i)
    {
        if(x[i] < 0)
        {
            x[i] = 2;
        }
        else if(x[i] > 0)
        {
            x[i] = 1;
        }
       cout << x[i] << " ";
    }


}