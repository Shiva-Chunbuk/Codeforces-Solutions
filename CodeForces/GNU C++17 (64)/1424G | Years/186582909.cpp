#include<bits/stdc++.h>
using namespace std;
#define int long long
void miller()
{
    int n;
    cin>>n;
    int s=1e9,e=0;
    vector<vector<int>>v(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
      int a,b;
      cin>>a>>b;
      v[i][0]=a;v[i][1]=b;
      s=min(a,s);
      e=max(b,e);
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[v[i][0]]+=1;
        m[v[i][1]]+=-1;
    }
    int maxy=0;
    int year=0,max=0;
    int sum=0;
    for(auto p:m)
    {
      sum+=p.second;
      if(sum>maxy)
      {
        maxy=sum;
        year=p.first;
      }
    }
    cout<<year<<" "<<maxy;
 
}
int32_t main()
{
    miller();
}