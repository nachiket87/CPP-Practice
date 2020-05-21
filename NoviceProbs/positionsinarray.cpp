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
        if(x[i] <= 10)
        {
            cout << "A"<<"["<<i<<"]"<<" = "<< x[i] << endl;
        }
    }
}