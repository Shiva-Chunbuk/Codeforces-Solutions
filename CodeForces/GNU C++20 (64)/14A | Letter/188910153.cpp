#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
 
    char arr[n][m];
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
 
    int minirow=INT_MAX,mxrow=INT_MIN;
    int minicol=INT_MAX,mxcol=INT_MIN;
 
    bool ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='*')
            {
                minirow=i;
                ans=1;
                break;
            }
        }
        if(ans==1)
            break;
    }
    ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='*')
            {
                mxrow=max(mxrow,i);
            }
        }
    }
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='*')
            {
                minicol=min(minicol,j);
 
            }
        }
 
    }
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='*')
            {
                mxcol=max(mxcol,j);
            }
        }
    }
    for(int i=minirow; i<=mxrow; i++)
    {
        for(int j=minicol; j<=mxcol; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}