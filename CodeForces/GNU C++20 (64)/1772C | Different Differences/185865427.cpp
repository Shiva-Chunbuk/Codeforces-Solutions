#include <bits/stdc++.h>
using namespace std;
#define ll long long
void miller(){
    int a,b;
    cin>>a>>b;
 
int c=1;
cout<<1<<" ";
for(int i=1;i<=a-1;i++){
    if(b-c-i+1>=a-i){
        c+=i;
 
    }
    else
        c++;
    
    cout<<c<<" ";
}
cout<<"\n";
}
int main(){
int test;
cin>>test;
while(test--)miller();
return 0;
}