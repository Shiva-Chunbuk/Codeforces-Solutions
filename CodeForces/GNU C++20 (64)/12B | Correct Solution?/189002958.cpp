#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, rec[15];
string s, k;
int main()
{
    cin >> n >> k;
    if (n == 0)
    {
        if (k == "0")
            cout << "OK";
        else
            cout << "WRONG_ANSWER";
        return 0;
    }
    while (n > 0)
    {
        rec[n % 10]++;
        n /= 10;
    }
    if (rec[0])
    {
        for (ll i = 1; i <= 9; i++)
        {
            if (rec[i])
            {
                s.push_back(i + '0');
                rec[i]--;
                break;
            }
        }
        while (rec[0])
        {
            s.push_back('0');
            rec[0]--;
        }
        for (ll i = 1; i <= 9; i++)
        {
            while (rec[i])
            {
                s.push_back(i + '0');
                rec[i]--;
            }
        }
        if (s == k)
        {
            cout << "OK";
        }
        else
        {
            cout << "WRONG_ANSWER";
        }
    }
    else
    {
        for (ll i = 1; i <= 9; i++)
        {
            while (rec[i])
            {
                s.push_back(i + '0');
                rec[i]--;
            }
        }
        if (s == k)
        {
            cout << "OK";
        }
        else
        {
            cout << "WRONG_ANSWER";
        }
    }
}