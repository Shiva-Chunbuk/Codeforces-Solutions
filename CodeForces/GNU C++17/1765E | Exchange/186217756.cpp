#include <bits/stdc++.h>
using namespace std;
#define ll long long
void miller()
{
 ll n, a, b;
 cin >> n >> a >> b;
 if (b < a)
 {
  cout << "1\n";
  return;
 }
 ll rem = n % a;
 if (rem)
 {
  cout << (n / a) + 1 << "\n";
 }
 else
  cout << n / a << "\n";
}
 
int main()
{
 ll t;
 cin >> t;
 for (ll i = 0; i < t; i++)
 {
  miller();
 }
 return 0;
}