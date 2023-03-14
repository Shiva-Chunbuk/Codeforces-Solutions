#include <bits/stdc++.h>
#define ll long double
#define ld long double
using namespace std;
void miller(){
    ll n , t;
    cin >> n >> t;
    vector < pair < ll , ll > > a(n);
    for(ll i = 0;i <a.size();i++){
        ll x , y;
        cin >> x >> y;
        y /= 2;
        a[i].first = x - y;
        a[i].second = x + y;
    }
    sort(a.begin() , a.end());
    ll k = 0;
    for(ll i = 0;i < a.size();i++){
        if(i == 0 or a[i].first - t >= a[i - 1].second)k++;
        if(i == a.size() - 1 or a[i].second + t < a[i + 1].first)k++;
    }
    cout << k << endl;
}
 
int main(){
    int t = 1;
    while(t--)miller();
}