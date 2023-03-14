#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void miller(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
            for(int i=0;i<n;i++){
                p.push({b[i],a[i]});
            }
            int output=k;
            while(k>0 and !p.empty()){
                while(!p.empty() && p.top().second <=output){
                    p.pop();
                }
                k-=p.top().first;
                output+=k;
            }
            if(p.empty())
                cout<<"yes\n";
            else cout<<"no\n";
            }
 
int main(){
int test;
cin>>test;
while(test--)miller();
return 0;
}