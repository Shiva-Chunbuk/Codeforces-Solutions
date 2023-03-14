#include<bits/stdc++.h>
using namespace std;
void miller(){
       int n,k;
       cin>>n>>k;
       bool solution=false;
       map<int,int> m;
       vector<int> sol;
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>x;
           m[x]++;
           if(m[x]>=k)solution=true;
           if(m[x]==k){
            sol.push_back(x);
           }
       }    
       if(!solution)
       {
          cout<<-1<<endl;
          return ;
       }
       sort(sol.begin(),sol.end());
       int l=sol[0];
       int r=sol[0];
       vector<pair<int,pair<int,int>>> ans;
       bool flag=false;
       for(int i=1;i<sol.size();i++)
       {
           if(sol[i-1]+1==sol[i])
           {
              r++;
              if(i==sol.size()-1)flag=true;
           }
           else
           {
              
              ans.push_back({r-l,{l,r}});
              l=sol[i];
              r=sol[i];
           }
 
       }
      if(ans.size()==0 || flag)ans.push_back({r-l,{l,r}});
 
       sort(ans.rbegin(),ans.rend());
       for(auto i: ans){
               cout<<i.second.first<<" "<<i.second.second<<endl;
               
          break;
       }
 
}
 
 
 
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        miller();
        
    }
}