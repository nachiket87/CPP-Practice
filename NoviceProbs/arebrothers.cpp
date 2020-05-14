// check if two input names are brothers.
#include<iostream>
#include<vector>
#include<map>
#include<array>

using namespace std;

int main()
{
    vector<string> first_name;
    vector<string> second_name;
    string fname, lname;
    cin >> fname >> lname;
    first_name.push_back(fname);
    first_name.push_back(lname);
    cin >> fname >> lname;
    second_name.push_back(fname);
    second_name.push_back(lname);
    if(first_name[1] == second_name[1])
    {
        cout << "brothers!"<< endl;
    }
    else
    {
        cout << "not brothers" << endl;
    }
    
    

    return 0;
}