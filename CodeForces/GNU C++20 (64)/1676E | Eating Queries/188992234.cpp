#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n, 0);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
 
    vector<int> presum(n, 0);
 
    presum[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        presum[i] = presum[i + 1] + v[i];
    }
    sort(presum.begin(),presum.end());
 
    while (q--)
    {
        int req;
        cin >> req;
        if (req > sum)
        {
            cout << -1 << endl;
        }
        else
        {
            int low = 0, high = n - 1;
            int mid;
            while (high - low > 1)
            {
                mid = (high + low) / 2;
                if (presum[mid] < req) // false
                {
                    low = mid + 1;
                }
                else // true
                {
                    high = mid;
                }
            }
 
            if (presum[low] >= req)
            {
                cout << low + 1 << endl;
            }
            else
            {
                cout << high + 1 << endl;
            }
        }
    }
}
}