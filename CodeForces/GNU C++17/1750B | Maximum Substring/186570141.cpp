#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c1++;
            else
                c2++;
        }
        ll output = c1 * c2, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ll c = 0;
                while (i < n && s[i] == '1')
                {
                    c++;
                    i++;
                }
                if (c > cnt)
                {
                    output = max(output, c * c);
                    cnt = c;
                }
            }
        }
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                ll c = 0;
                while (i < n && s[i] == '0')
                {
                    c++;
                    i++;
                }
                if (c > cnt)
                {
                    output = max(output, c * c);
                    cnt = c;
                }
            }
        }
        cout << output << endl;
    }
}