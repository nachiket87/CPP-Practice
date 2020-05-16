// find them maximum number from the numbers entered.
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    int max_num;

    for(int j=1; j<=n; ++j)
    {
        max_num = num;
        cin >> num;
        if(num>max_num)
        {
            max_num = num;
        }

    }

   cout << max_num << endl;
   return 0;

}