#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n = 0, m = 0, a = 0;
    cin>>n>>m>>a;
    long long res1 = 0, res2 = 0;
    if (n % a != 0)
    {
        res1 = (n / a) + 1;
    }
    else
        res1 = n / a;
    if (m % a != 0)
    {
        res2 = (m / a) + 1;
    }
    else
        res2 = m / a;
 
    cout << res1 * res2;
 
}