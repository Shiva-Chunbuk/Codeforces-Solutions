#include <bits/stdc++.h>
using namespace std;
#define ll long long
void miller()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c = a[0];
    int d = a[0];
    for (int i = 1; i < n; i++)
    {
        c = c | a[i];
        d = d & a[i];
    }
    cout << c - d << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
        miller();
    return 0;
}