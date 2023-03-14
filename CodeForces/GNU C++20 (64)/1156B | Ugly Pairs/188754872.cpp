#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t N = 2e5 + 5;
int32_t mod = 1e9 + 7;
void miller()
{
    string s;
    cin >> s;
    string s1="", s2="";
    
    for(char ch : s)
    {
        int k = ch - 'a';
        if(k%2)
            s1 += ch;
        else
            s2 += ch;
    }
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    string ans = "";
    
    int sz1 = s1.length(), sz2 = s2.length();
    
    if(sz1==0 || sz2==0)
    {
        ans = s1 + s2;
        cout << ans << "\n";
        return;
    }
    
    char ch1 = s1[0], ch2 = s1[sz1-1];
    char ch3 = s2[0], ch4 = s2[sz2-1];
    
    if(abs(ch2-ch3) > 1)
        ans = s1 + s2;
    else if(abs(ch1-ch4) > 1)
        ans = s2 + s1;
    else
        ans = "No answer";
    
    cout << ans << "\n";
}
 
int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        miller();
}