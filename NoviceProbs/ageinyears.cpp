// find age in years, months and days. Assuming year = 365 / month = 30
#include<iostream>

using namespace std;

int main()
{
   int A, B;
   cin >> A;
   int years = A/365;
   cout << "years: " << years << endl;
   int months = (A - (years * 365))/30;
   cout << "months: " << months << endl;
   int days = A - ((years*365) + (months*30));
   cout << "days: " << days << endl;

   return 0;

    
}