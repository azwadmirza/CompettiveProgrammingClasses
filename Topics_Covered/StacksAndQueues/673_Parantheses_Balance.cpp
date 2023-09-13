#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        stack<char> stk;
        string s;
        getline(cin, s);

        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                stk.push(s[i]);
            }
            else if (stk.empty())
            {
                stk.push(s[i]);
            }
            else
            {
                if (stk.top() == '(' && s[i] == ')')
                {
                    stk.pop();
                }
                else if (stk.top() == '[' && s[i] == ']')
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
        }

        if (stk.empty())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}