#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int mini=*min_element(a,a+n);
        if(a[0] == mini)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}