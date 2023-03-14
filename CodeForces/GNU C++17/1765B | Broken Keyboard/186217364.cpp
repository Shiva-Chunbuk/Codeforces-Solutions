#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int n;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  int b;
  cin>>b;
  char a[102];
  cin>>a;
  int c = b % 3;
  int u = b - c;
 
  for (int i = 0; i <= u;)
  {
   if (c == 2)
   {
   cout<<"NO\n";
    break;
   }
   else if (i == u)
   {
    cout<<"YES\n";
    break;
   }
   else if (a[i + 1] == a[i + 2])
   {
    i = i + 3;
   }
   else
   {
    cout<<"NO\n";
    break;
   }
  }
 }
}