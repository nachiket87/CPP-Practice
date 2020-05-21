#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int binaryNum[32]; 
    int total_inputs;
    vector <int> newNum;
    int i = 0; 
    int n;
    int sum=0;
    cin >> total_inputs;
    vector<int> answers;

    while (total_inputs != 0)
        {
            cin >> n;
            sum = 0;

            while (n > 0) { 
                binaryNum[i] = n % 2; 
                n = n / 2; 
                i++; 
            }
            int k = 0;
            for (int j = i - 1; j >= 0; j--) 
            {
                // cout << binaryNum[j]; 
                if (binaryNum[j] == 1)
                {
                    newNum.push_back(binaryNum[j]);
                }
            }
            for(i=0; i<newNum.size(); i++)
            {
                if(newNum[i]==1)
                {
                    sum += pow(2, i);
                }
            }
            answers.push_back(sum);
            total_inputs--;
            newNum.clear();
            fill_n(binaryNum, 32, 0);
        }
    for(auto i=answers.begin(); i!=answers.end(); i++)
    {
        cout << *i << endl;
    }
  return 0; 
}