#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a];
        int arr2[a];
        for(int i=0; i<a; i++){
           cin>>arr[i];
        }
        for(int i=0; i<a; i++){
            arr2[i]=arr[i];
        }
        sort(arr, arr+a);
        for(int i=0; i<a; i++){
            int x;
            if (arr2[i]==arr[a-1]){
                x=arr2[i]-arr[a-2];
            }
            else{
                x = arr2[i]-arr[a-1];
            }
           cout<<x<<" ";
        }
      cout<<std::endl;
    }
   
}