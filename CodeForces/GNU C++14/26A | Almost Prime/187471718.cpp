#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector <bool> us(n + 110);
    vector <int> resh;
    for(int i = 2; i <= n; ++i)
    {
        if(!us[i])
        {
            resh.push_back(i);
            for(int j = i + i; j <= n; j += i)
            {
                us[j] = 1;
            }
        }
    }
    for(int i = 2; i <= n; ++i)
    {
        int cnt = 0;
        for(int j = 0; j < (int)resh.size(); ++j)
        {
            if(i % resh[j] == 0)
                ++cnt;
        }
        if(cnt == 2)
            ++ans;
    }
    cout << ans << '\n';
}   
 