#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int n, a, b, sum_of_digits=0, temp_num, final_sum;
  cin >> n >> a >> b;
  vector<int> correct_numbers;

  for(int i=2; i<=n; ++i)
  {
   sum_of_digits=0;
   temp_num = i;
   while(temp_num !=0)
   {
       sum_of_digits += temp_num%10;
       temp_num = temp_num / 10;
   }
   if (sum_of_digits <=max(a,b) && sum_of_digits>=min(a,b))
   {
       final_sum += i;
   }
  }
   cout << final_sum << endl;
  return 0; 
}