#include <bits/stdc++.h>
using namespace std;
#define ll long long
void miller()
{
 
    ll a, b;
    cin >> a >> b;
    ll x[a];
    for (ll i = 0; i < a; i++)
 
        cin >> x[i];
    ll ans = 0;
    ll add = 0;
    priority_queue<ll, vector<ll>, greater<ll>> q;
 
    for (ll i = b; i < a; i++)
    {
        if (x[i] < 0)
            q.push(x[i]);
        add += x[i];
        while (add < 0)
        {
            int z = q.top();
            q.pop();
            z = -1 * z;
            add += (2 * z);
            ans++;
        }
    }
    if (x[b - 1] <= 0)
        add = x[b - 1];
    else if (b != 1)
    {
        add = -1 * x[b - 1];
        ans++;
    }
    priority_queue<ll> p;
    for (ll i = b - 2; i >= 1; i--)
    {
        if (x[i] > 0)
            p.push(x[i]);
        add += x[i];
        while (add > 0)
        {
            int z = p.top();
            p.pop();
            z = -1 * z;
            add += (2 * z);
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
   ll test;
    cin >> test;
    while (test--)
        miller();
    return 0;
}