#include <iostream>
#include <string.h>
#define MAX 5
using namespace std;

int tos = -1;
int A[MAX];

void push(int elem)
{
    tos++;
    A[tos] = elem;
}

void pop()
{
    tos--;
}

int peek()
{
    return A[tos];
}

int postfix(string s)
{

    int count = 0;
    int opr =0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            push(s[i] - '0');
            count++;
        }
        else
        {
            opr++;
            int op2 = peek();
            pop();
            int op1 = peek();
            pop();

            switch (s[i])
            {
            case '+':
                push(op1 + op2);
                break;
            case '-':
                push(op1 - op2);
                break;
            case '*':
                push(op1 * op2);
                break;
            case '/':
                push(op1 / op2);
                break;
            }
        }
    }
    return peek();
}

int main()
{
    string a;
    cout << "Enter the expression you want to solve:- ";

    cin >> a;
    cout << postfix(a);
    return 0;
}