#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int length = s.size();

    stack<char> st;

    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        str += tolower(s[i]);
    }

    for (int i = 0; i < length; i++)
    {
        st.push(tolower(s[i]));
    }

    string st2 = "";
    for (int j = 0; j < length; j++)
    {
        st2 = st2 + st.top();
        st.pop();
    }
    bool a = false;

    if (str == st2)
    {
        a = true;
    }
    return a;
}

// Driver code
int main()
{
    string s;
    cout << "Enter the word :- ";
    cin >> s;

    if (isPalindrome(s))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}