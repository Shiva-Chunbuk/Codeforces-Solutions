#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x=n/2+1,op=1;
        for(int i=1;i<=n;i++)
        {
            cout<<x<<' ';
            if(op==1) x-=n/2;
            else x+=n/2+1;
            op^=1;
        }
        cout<<'\n';
    }
    return 0;
}