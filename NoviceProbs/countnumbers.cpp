#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int total_numbers;
    cin >> total_numbers;
    int num;
    int negatives=0;
    int odd=0;
    int postives= 0;
    int evens=0;
    
    for(int j=0; j<=total_numbers; ++j)
    {
        cin >> num;
        
        if (num < 0)
        {
            negatives+=1;
        }
        else if(num > 0)
        {
           postives += 1; 
        }
        if(num % 2 == 0)
        {
            evens += 1;
        }
        else
        {
            odd += 1; 
        }
            
    }
    cout << "Odd: " << odd << endl;
    cout << "Even: " << evens << endl;
    cout << "Positives: " << postives << endl;
    cout << "Negatives: " << negatives << endl;
    return 0;
}