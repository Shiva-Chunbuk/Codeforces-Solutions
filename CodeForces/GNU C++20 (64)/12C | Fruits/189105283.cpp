#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main ()
{
    int n,t,ans=0;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; ++i)
    cin>>a[i];
    sort(a,a+n);
    string s;
    map <string,int> mp;
    for(int i=0; i<t; ++i)
    {
        cin>>s;
        ++mp[s];
    }
    vector<int> v;
    for(auto it : mp)
    v.push_back(it.second);
    sort(v.begin(),v.end(), greater<int>());
    for(int i = 0; i<v.size(); ++i)
    ans += v[i]*a[i];
    cout<<ans<<" ";
    ans = 0;
    int i=n-1,j=0;
    while(i>=0 && j<v.size())
    {
        ans += a[i]*v[j];
        --i;
        ++j;
    }
    cout<<ans;
}