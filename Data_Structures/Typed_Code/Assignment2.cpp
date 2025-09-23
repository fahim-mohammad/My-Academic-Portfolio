#include <iostream>
#include <string>

using namespace std;

bool palindrome(string str)
{
    string reversestr;
    
    for(int i=str.length()-1; i>=0; i--)
    {
        reversestr += str[i];
    }
    if(str == reversestr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() 
{
    string str;
    cout<<"Enter the String: ";
    getline(cin, str);
    if(palindrome(str) == true)
    {
        cout<< "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
