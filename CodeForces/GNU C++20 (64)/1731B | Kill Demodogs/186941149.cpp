#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
void miller()
{
    ll n;
    cin >> n;
    ll output = 2 * (2 * n + 1) - 3;
    ll a = n;
    ll b = n + 1;
    if (output % 2 == 0)
        output /= 2;
    else if (a % 2 == 0)
        a /= 2;
    else
        b /= 2;
    if (output % 3 == 0)
        output /= 3;
    else if (a % 3 == 0)
        a /= 3;
    else
        b /= 3;
    output = output * b;
    output = output % mod;
    output = output * a;
    output = output % mod;
    output *= 2022;
    output %= mod;
    cout << output << endl;
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
        miller();
}