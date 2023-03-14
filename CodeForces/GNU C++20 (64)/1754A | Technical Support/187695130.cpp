#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        int q = 0, a = 0, j, ans = 0, count = 0;
        cin >> s;
 
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'Q')
            {
                q++;
            }
            else if (s[i] == 'A')
            {
                q--;
            }
            if (q <= 0)
            {
                q = 0;
            }
        }
        if (q == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}