#include <bits/stdc++.h>
using namespace std;
 
main(){
    string s; char ch;
    cin >> s;
    ch = s.at(0);
    if (ch >= 97 && ch <= 122){s.at(0) = ch - 32;}
    cout << s;    
}