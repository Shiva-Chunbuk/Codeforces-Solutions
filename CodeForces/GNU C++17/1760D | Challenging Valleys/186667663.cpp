#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int Test;
    cin >> Test;
    while (Test--)
    {
        int n, ind = 0;
        cin >> n;
 
        int arr[n + 1];
 
        arr[0] = 0;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (arr[ind] != x)
            {
                arr[ind + 1] = x;
                ind = ind + 1;
            }
        }
 
        int cnt = 0;
 
        for (int i = 1; i <= ind; i++)
        {   
            if (i == 1)
            {
                if (arr[i] < arr[i + 1])
                    cnt = cnt + 1;
                   
                
            }
            else if (i == ind)
            {
                if (arr[i] < arr[i - 1])
                    cnt = cnt + 1;
                    
                
            }
            else{
                if (arr[i]<arr[i-1] && arr[i]<arr[i+1])
                    cnt=cnt+1;
            }
        }
    
        if (cnt <= 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
 
    return 0;
}