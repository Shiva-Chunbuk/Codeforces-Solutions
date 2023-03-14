#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int min = 10000001;
        int n;
        cin >> n;
        int i;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
                min = a[i];
        }
        int sum = 0;
        for (i = 1; i <= n; i++)
            sum = sum + (a[i] - min);
        cout << sum << endl;
    }
    return 0;
}