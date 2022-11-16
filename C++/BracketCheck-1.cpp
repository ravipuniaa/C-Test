#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

bool checkForBrackets(string brackets)
{
    stack<char> stk;

    for (int i = 0; i < brackets.size(); i++)
    {
        char ch = brackets[i];

        if (!stk.empty() && ((stk.top() == '(' && ch == ')') || (stk.top() == '{' && ch == '}') || (stk.top() == '[' && ch == ']')))
        {
            stk.pop();
        }
        else
        {
            stk.push(ch);
        }
    }

    return stk.empty();
}

string extractBracketsFromFile(string fileName)
{
    fstream file(fileName);
    string brackets = "";
    string text;

    while (getline(file, text))
    {
        for (int i = 0; i < text.size(); i++)
        {
            char ch = text[i];
            if (ch == '[' || ch == '{' || ch == '(' || ch == ')' || ch == '}' || ch == ']')
            {
                brackets.push_back(ch);
            }
        }
    }

    return brackets;
}

int main()
{
    string brackets = extractBracketsFromFile("./BinarySearch.cpp");

    // cout << brackets << endl;

    if (!checkForBrackets(brackets))
    {
        cout << "The file is unbalanced!!" << endl;
    }
    else
    {
        cout << "All Perfect!!" << endl;
    }

    return 0;
}