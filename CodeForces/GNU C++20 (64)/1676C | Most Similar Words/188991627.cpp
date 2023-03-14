#include <bits/stdc++.h>
using namespace std;
int n, m;
string s[55];
void miller()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
 
    int ans = 0x3f3f3f3f;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += abs(s[i][k] - s[j][k]);
            }
            if (i != j)
                ans = min(ans, sum);
        }
    }
    cout << ans << '\n';
}
 
signed main()
{
 
    int T;
    cin >> T;
    while (T--)
        miller();
    return 0;
}