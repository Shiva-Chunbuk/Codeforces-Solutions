/******************************************************************************
 
                              A.Bestie
 
*******************************************************************************/
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int cst=0, a;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i==0) a=v[0];
            else a=gcd(a, v[i]);
        }
        if(a==1)
        {
            cout<<0<<endl;
            continue;
        }
        else if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            int t1=-1, t2=-1;
            for(int i=n-1;i>=0;i--)
            {
                if(i==n-1) t1=gcd(n, v[n-1]);
                else t1=gcd(t1, v[i]);
            }
            for(int i=n-1;i>=0;i--)
            {
                if(i==n-1) t2=v[n-1];
                else if(i==n-2) t2=gcd(t2, gcd(n-1, v[i]));
                else t2=gcd(t2, v[i]);
            }
            if(t1==1) cout<<1<<endl;
            else if(t2==1) cout<<2<<endl;
            else cout<<3<<endl;
        }
    }
}