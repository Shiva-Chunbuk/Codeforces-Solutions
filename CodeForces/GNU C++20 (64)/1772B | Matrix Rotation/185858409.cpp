#include <bits/stdc++.h>
using namespace std;
#define ll long long
void miller(){
    int m[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
cin>>m[i][j];
 
        }    }
int f=1;
for(int i=0;i<4;i++){
    if(m[0][0]<m[1][0] and m[0][0]<m[0][1] and m[0][1]>m[0][0]and m[0][1]<m[1][1] and m[1][0]<m[1][1]){
        f=0;
        break;
 
    }
int k=m[0][0];
m[0][0]=m[1][0];
m[1][0]=m[1][1];
m[1][1]=m[0][1];
m[0][1]=k;
}
 
if(f==1)cout<<"no"<<endl;
else cout<<"yes"<<endl;
}
 
int main(){
int test;
cin>>test;
while(test--)miller();
return 0;
}
 
 