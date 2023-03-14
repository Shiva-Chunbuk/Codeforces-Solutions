#include <bits/stdc++.h>
using namespace std;
int greatestcommondivisor(int a, int b)
{
    if (b == 0)
        return a;
    return greatestcommondivisor(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxx = max(maxx, a[i]);
        }
        int temp = a[0];
        for (int i = 1; i < n; i++)
        {
            temp = greatestcommondivisor(temp, a[i]);
        }
        int ans = maxx / temp;
        cout << ans << endl;
    }
 
    
}