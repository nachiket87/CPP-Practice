//Reverse a string in place 

#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string str = "tekihcaN";
  string new_string="";
  for (string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
  {
    new_string += *rit;
  }
    
  cout << new_string << endl;
  return 0;
}