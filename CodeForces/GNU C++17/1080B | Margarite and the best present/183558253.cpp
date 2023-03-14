#include <bits/stdc++.h>
using namespace std;
int miller(int n)
{
    if(n%2==0)
    return n/2;
    else
    return (((n-1)/2)-n);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int x=miller(l-1);
        int y=miller(r);
        cout<<y-x<<endl;
    }
}