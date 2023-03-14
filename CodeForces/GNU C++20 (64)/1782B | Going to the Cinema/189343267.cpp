#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
            cin >> m[i];
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n - i - 1; j++)
        //     {
        //         if (m[j] > m[j + 1])
        //         {
        //             int temp = m[j];
        //             m[j] = m[j + 1];
        //             m[j + 1] = temp;
        //         }
        //     }
        // }
std::sort(m, m + n,std::less<int>());
 
        int output = m[0] != 0;
        for (int i = 0; i < n; i++)
        {
            if ((m[i] <= i) and (i == n - 1 || m[i + 1] > i + 1))
                output++;
        }
 
        cout << output << endl;
    }
}