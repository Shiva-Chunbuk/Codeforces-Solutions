/******************************************************************************
 
                              //round number
 
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb_push_back
void output(){
    int a;
    cin>>a;
    string b=to_string(a);
    int c=b.size();
    char ch=b[0];
    int d=(ch-'0');
    cout<<d+(9*c)-9<<"\n";
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            output();
 
        }
    }