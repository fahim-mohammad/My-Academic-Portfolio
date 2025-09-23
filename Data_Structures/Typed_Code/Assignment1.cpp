#include <iostream>
#include <string>
#include <stack>

using namespace std;

void reverseword(string& sentence)
{
    stack<char> st;
    
    for(int i = 0; i<sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            st.push(sentence[i]);
        }
        else
        {
            while(!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }
    }
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main() {
    
    string sentence;
    
    cout << "Enter the string: ";
    getline(cin, sentence);
    reverseword(sentence);

    return 0;
}
