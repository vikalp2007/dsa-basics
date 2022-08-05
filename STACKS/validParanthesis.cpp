#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{

    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++) // we can use s.size() also
    {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return ans;
    }
}

int main()
{

    string s;
    cin >> s;

    if (isValid(s))
    {
        cout << "Valid Paranthesis \n";
    }
    else
    {
        cout << "Invalid Paranthesis \n";
    }

    return 0;
}