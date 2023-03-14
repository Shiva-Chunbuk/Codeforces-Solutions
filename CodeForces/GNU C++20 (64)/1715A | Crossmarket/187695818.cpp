#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
cin>>n;
 while(n--){
  int x,y,z;
  cin>>x>>y;
  int energy=0;
  if(x<y){
   z=x;x=y;y=z;
  }
  if(x-1){
   energy+=x+2*y-2;
  }else{
   energy+=2*y+x-3;
  }
 
 cout<<energy<<endl;
 }
}
                             