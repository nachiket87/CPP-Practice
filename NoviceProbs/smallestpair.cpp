#include<iostream>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
       int number_of_elements;
       cin >> number_of_elements;
       int arr[number_of_elements];
       int smallest_result;
       int j;

       for(int i=0; i<number_of_elements; ++i) 
       {
         int a;
         cin >> a;
         arr[i] = a;
       }
       smallest_result = arr[0] + arr[1] + 1;

       for(int i=0; i<number_of_elements; ++i)
       {
           for(int j=i+1; j<number_of_elements; ++j)
           {
             if(smallest_result > (arr[i] + arr[j] + (j+1) - (i+1)))
             {
               smallest_result = arr[i] + arr[j] + (j+1) - (i+1); 
             }
           }
       }
       cout << smallest_result << endl;

    }
}