#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<vector<char>> res(3,vector<char>(3));
    char ch;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ch;
            res[i][j]=ch;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(res[i][j]!=res[3-i-1][3-j-1]) 
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}