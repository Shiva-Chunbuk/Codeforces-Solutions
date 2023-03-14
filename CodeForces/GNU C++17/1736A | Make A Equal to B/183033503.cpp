#include<bits/stdc++.h>
using namespace std;
int tmp;int a1[2000],b1[2000];
int main()
{
 cin>>tmp;
 for(int i=tmp;i>0;i--)
 {
  int n,a=0,b=0;
  cin>>n;
  for(int j=0;j<n;j++)
   cin>>a1[j];
  for(int j=0;j<n;j++)
  {
   cin>>b1[j];
   if(b1[j]!=a1[j])
    b++;
  }
  sort(a1,a1+n);
  sort(b1,b1+n);
  for(int j=0;j<n;j++)
  {
   if(a1[j]!=b1[j])
    a++;
  }
  if(b>a)
   a++;
  int qk=a<b?a:b;
  cout<<qk<<endl;
 }
 return 0;
}
                              