#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i%2==0){
                if(i%4!=0 && j==b){
                    cout<<"#";
                }
                else if(i%4==0 && j==1){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
}