// sum of consecutive odd numbers
#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main()
{
    int total_inputs; 
    int first_number, second_number;
    int total_sum = 0;
    vector<array<int, 2> > ranges;
    cin >> total_inputs;
    for(int i=0; i<total_inputs; ++i)
    {
       cin >> first_number >> second_number;
       ranges.push_back({min(first_number, second_number), max(first_number, second_number)});
    }
    for(int j=0; j<ranges.size(); j++)
    {
        for(int k=ranges[j][0]+1; k<ranges[j][1]; ++k)
        {
            if(k%2 != 0)
            {
                total_sum += k;
            }
        }
        cout << total_sum << endl;
        total_sum = 0;
    }
    return 0; 
}