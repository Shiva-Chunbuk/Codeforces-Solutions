#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        if(b%2==0)
            cout<<(b/2)<<endl;
        
        else
            cout<<((b/2)+1)<<endl;
        
    }
}