#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> c;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vector<int> p;
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
                mp[x]++;
                p.push_back(x);
            }
            c.push_back(p);
        }
        bool flag = true;
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            flag = true;
            for (int j = 0; j < c[i].size(); j++)
            {
                if (mp[c[i][j]] < 2)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ind = i;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}