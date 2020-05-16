// find factorials
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int total_numbers;
    vector<int> facts;
    int n;
    int factor=1;
    cin >> total_numbers;

    for(int j=1; j<=total_numbers; j++)
    {
        cin >> n;
        for(int k=1; k<=n; k++)
        {
           factor = factor * k;
        }
        facts.push_back(factor);
        factor = 1;

    }
    for(auto l=facts.begin(); l != facts.end(); l++)
    {
        cout << *l << endl;
    }
    return 0;
}