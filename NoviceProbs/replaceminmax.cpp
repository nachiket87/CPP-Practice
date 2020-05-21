#include<iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    long long arr[a];
    for(int i=0; i<a; ++i)
    {
       cin >> arr[i];
    }
    int smallest = arr[0];
    int smallest_index = 0;
    int largest = arr[0];
    int largest_index = 0;
    
    for(int i=0; i<a; ++i)
    {
       if(arr[i] < smallest)
       {
           smallest = arr[i];
           smallest_index = i;
       }
       if(arr[i] > largest)
       {
           largest=arr[i];
           largest_index = i;
       }
    }
    swap(arr[smallest_index], arr[largest_index]);
    
    for(int i=0; i<a; ++i)
    {
        cout << arr[i] << " ";
    }
    
    


}
 
 