#include<bits/stdc++.h>
using namespace std;
  int main(){
        int test;
        cin>>test;
        while(test--){
         int t;
    cin>>t;
    string shiva;
    cin>>shiva;
    string r="";
    int sum=0;
    if(shiva[0]!='0')
  sum=1;
  for(int i=1;i<shiva.length();i++)
{
if(shiva[i]=='0')r+='+';
else{
    if(!sum)
{
    sum+=1;
    r+='+';
}
else{
    sum-=1;
    r+='-';
}
}
}
cout<<r<<endl;
  }
  }