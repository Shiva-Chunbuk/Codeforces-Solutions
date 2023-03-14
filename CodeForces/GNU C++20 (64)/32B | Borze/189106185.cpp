#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string code;
    cin >> code;
 
    for (int i = 0; i < code.length(); i++)
    {
        char s = code[i];
        char next = code[i + 1];
        if (s == '.')
            cout << '0';
        else if (string(1, s) + next == "-.")
        {
            cout << '1';
            i++;
        }
        else if (string(1, s) + next == "--")
        {
            cout << '2';
            i++;
        }
    }
    cout << endl;
}