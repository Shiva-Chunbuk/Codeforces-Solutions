#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    t=1000;
int arr[t];
 int n;
  cin>>n;
   for(int i=0;i<n-1;i++){
    cin>>arr[i]; 
    }
   int a,b;
    cin>>a>>b;
   int sum=0;
  for(int i=a-1;i<b-1;i++){
    sum+=arr[i];
   }
  cout<<sum;
}