#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int sum = 0, ans = 0;
    string str;
 while (getline(cin, str))
 {
  if (str[0] == '+') sum++;
  else if (str[0] == '-') sum--;
  else ans = ans + (str.size() - 1 - str.find(':')) * sum;
 }
 cout << ans << endl;
}