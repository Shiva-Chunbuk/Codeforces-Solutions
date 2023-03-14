#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s, ss;
    cin>>s;
    ll z = s.size();
    for(ll i =0; i<z; i++)
    {
        if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i' ||s[i] == 'o'|| s[i] == 'u' ||s[i] == 'A'||s[i] == 'I' || s[i] == 'E' ||s[i] == 'O'|| s[i] == 'U'||s[i] == 'y'|| s[i] == 'Y') continue;
        else
        {
            ss += '.';
            ss += tolower(s[i]);
        }
    }
    cout<<ss<<endl;
    return 0;
}