// compare numbers basedo on text input
#include<iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    if(a[1]=='>')
    {
        if(a[0] > a[2])
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        
    }
    else if(a[1]=='<')
    {
        if(a[0] < a[2])
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if(a[1]=='=')
    {
        if(a[0] == a[2])
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    
    return 0;
}