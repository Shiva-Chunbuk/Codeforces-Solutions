#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int p;
        int m=0;
        int arr[n];
     m=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        if(arr[0]!=arr[1]){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=2;i<n;i++){
                if(arr[i]!=arr[1]){
                    m=1;
                    p=i;
                    break;
                    
                }
            }
            if(m==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                swap(arr[1],arr[p]);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
                
            }
        }
    }
}