#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
 while (t--) {
     int a, b, c;
  cin >> a >> b >> c;
  if (a < c + abs(b - c)) {
   cout << 1 <<endl;
  }
  else if (a > c + abs(b - c)) {
   cout << 2 <<endl;
  }
  else {
   cout << 3 <<endl;
  }
 }
 }