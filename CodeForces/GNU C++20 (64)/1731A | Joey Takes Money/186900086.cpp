#include <bits/stdc++.h>
using namespace std;
#define ll long long
void miller()
{
    ll n;
    ll m = 1;
    cin >> n;
    ll arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m *= arr[i];
    }
    m += (n - 1);
    cout << m * 2022 << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
        miller();
    return 0;
}