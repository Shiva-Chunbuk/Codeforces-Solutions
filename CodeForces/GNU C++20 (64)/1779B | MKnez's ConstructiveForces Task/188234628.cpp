#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forn(i, r, n) for (int i = r; i < int(n); ++i)
void miller()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "yes" << endl;
        for (int i = 0; i < a / 2; ++i)
        {
            cout << "1 -1 ";
        }
        cout << endl;
    }
    else if (a == 3)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
        int r = a / 2;
        for (int i = 0; i < a / 2; ++i)
        {
            cout << 1 - r << " " << r << " ";
        }
        cout << 1 - r << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
        miller();
    return 0;
}