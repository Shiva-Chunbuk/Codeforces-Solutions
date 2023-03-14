/******************************************************************************
                       //Police recruits
 ******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t, prevcount;;
    int a=0,unt=0,newcount=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        switch(t){
            case -1:
                newcount=0;
                if(a==0){
                    unt++;
                }
                else{
                   a--;
                }
                break;
            default:
               a+=t;
                break;
        }
    }
    cout<<unt;
}