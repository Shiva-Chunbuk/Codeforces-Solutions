#include <bits/stdc++.h>
using namespace std;
void miller(){
    int n,k;
    
    cin>>n>>k;
 int maximum=n,x=1;
for(int i=1;2*i<=n;++i)
cout<<n-i+1<<' '<<i<<' ';
if(n%2)
cout<<n/2+1;
cout<<endl;
}
 
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
        miller();
}