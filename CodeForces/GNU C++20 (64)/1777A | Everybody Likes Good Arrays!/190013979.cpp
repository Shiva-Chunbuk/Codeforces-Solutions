#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int i = 0;
        while(i < n){
            cin>>a[i];
            i++;
        }
        int c=0;
        i = 0;
        while(i < n - 1){
            if((a[i]%2==0 && a[i+1]%2==0)||(a[i]%2==1 && a[i+1]%2==1))c++;
            i++;
        }
        cout<<c<<endl;
    }
    return 0;
}