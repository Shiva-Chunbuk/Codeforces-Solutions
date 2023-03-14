#include <bits/stdc++.h>
using namespace std;
#define int long long
void miller()
{
    int idx = -1;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            idx = i;
            break;
        }
    }
    if (idx == -1 or idx == n - 1)
    {
        cout << s[0] << " ";
        for (int i = 1; i < s.size() - 1; i++)
            cout << s[i];
        cout << " " << s[n - 1];
    }
    else if (idx == 0)
    {
        int b_idx = -1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                b_idx = i;
                break;
            }
        }
 
        if (b_idx == -1)
        {
            cout << s[0] << " ";
            for (int i = 1; i < s.size() - 1; i++)
                cout << s[i];
            cout << " " << s[n - 1];
        }
        else if (b_idx == n - 1)
        {
 
            for (int i = 0; i < n - 2; i++)
                cout << s[i];
            cout << " " << s[n - 2] << " ";
            cout << s[n - 1];
        }
        else
        {
            for (int i = 0; i < b_idx; i++)
                cout << s[i];
            cout << " ";
            for (int i = b_idx; i < n - 1; i++)
                cout << s[i];
            cout << " " << s[n - 1];
        }
    }
 
    else
    {
        for (int i = 0; i < idx; i++)
            cout << s[i];
        cout << " " << s[idx] << " ";
        for (int i = idx + 1; i < s.size(); i++)
            cout << s[i];
    }
    cout << endl;
}
 
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        miller();
    }
    return 0;
}