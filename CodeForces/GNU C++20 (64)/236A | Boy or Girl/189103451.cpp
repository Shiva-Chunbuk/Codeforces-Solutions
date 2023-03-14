#include <bits/stdc++.h>
using namespace std;
int check(string inp, char temp, int j)
{
 int ret=0;
 for (int i = 0; i < j; ++i)
 {
  if(temp == inp[i]) ret++;
 }
 return ret;
}
 
int main()
{
 string inp;
 getline(cin>>ws,inp);
 
 int res = 0;
 int len = inp.length();
 
 for (int i = 0; i < len; ++i)
 {
  int test = check(inp,inp[i],i);
  if(test==0) res++;
 }
 
 if(res%2==0)
  cout<<"CHAT WITH HER!"<<endl;
 else
  cout<<"IGNORE HIM!"<<endl;
}