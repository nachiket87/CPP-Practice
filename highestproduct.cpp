// find the highest product of 3 integers in an array.
// Integers can be both postiive and negative.
#include <iostream>
#include<array>
using namespace std;

int main(){

    int list_of_numbers[] = {10, -10, 1, 3, 2};
    int highest_product_of_2 = list_of_numbers[0]*list_of_numbers[1];
    int lowest_product_of_2 = list_of_numbers[0]*list_of_numbers[1];
    int lowest_number = min(list_of_numbers[0], list_of_numbers[1]);
    int highest_number = max(list_of_numbers[0], list_of_numbers[1]);
    int current = 0;
    int length_of_array{sizeof(list_of_numbers)/sizeof(list_of_numbers[1])};
    int highest_product_of_3 = highest_product_of_2*list_of_numbers[2];

    
    for(int i = 2; i<length_of_array; ++i){
       current = list_of_numbers[i];
       highest_product_of_3 = max(max(highest_product_of_3, current * highest_product_of_2), current * lowest_product_of_2);
       highest_product_of_2 = max(max(highest_product_of_2, current * highest_number), current*lowest_number);
       lowest_product_of_2 = min(min(lowest_product_of_2, current * highest_number), current*lowest_number);
       highest_number = max(highest_number, current);
       lowest_number = min(lowest_number, current);
    } 
    cout << highest_product_of_3 << endl; 


  
    return 0; 
}