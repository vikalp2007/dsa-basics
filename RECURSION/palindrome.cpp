#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i)
{
    if (i>s.length()-i-1)
        return true;

    if (s[i] != s[s.length()-i-1]){
        return false;
    }
    else{
        return checkPalindrome(s,i+1);
    }
    
}

int main()
{
    string s;
    cin >> s;
    int i = 0;

    bool ans = checkPalindrome(s, i);
    if (ans)
    {
        cout << "The given string is Palindrome" << endl;
    }
    else
    {
        cout << "The given string is NOT a Palindrome" << endl;
    }

    return 0;
}