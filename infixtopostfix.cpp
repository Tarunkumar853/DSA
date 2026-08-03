#include <bits/stdc++.h>
using namespace std;

char st[100];
int top = -1;

void push(char x)
{
    st[++top] = x;
}

char pop()
{
    return st[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '^')
        return 3;

    return -1;
}

int main()
{
    string exp;
    cin >> exp;

    int i = 0;

    while (exp[i] != '\0')
    {
        if (isalnum(exp[i]))
        {
            cout << exp[i];
        }
        else if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            while (top != -1 && st[top] != '(')
            {
                cout << pop();
            }

            if (top != -1)
                pop(); // Remove '('
        }
        else
        {
            while (top != -1 && priority(st[top]) >= priority(exp[i]))
            {
                cout << pop();
            }

            push(exp[i]);
        }

        i++;
    }

    while (top != -1)
    {
        cout << pop();
    }

    return 0;
}