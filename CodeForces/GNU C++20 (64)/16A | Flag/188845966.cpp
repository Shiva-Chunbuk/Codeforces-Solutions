#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[n];
    int y1=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        for(int j=1;j<m;j++)
        {
            if(a[i][j]!=a[i][j-1])
            {
                y1=0;
                cout<<"NO";
                return 0;
            }
        }
    }
    int y2=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            y2=0;
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}