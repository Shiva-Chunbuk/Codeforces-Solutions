 
#include <bits/stdc++.h>
using namespace std;
void miller()
{
 
    long long int a=1;
    long long int b = 1;
    cin >> a;
    string s;
    cin >> s;
    cout << 1 << " ";
 
    int i = 1;
    while (i < a - 1)
    {
        {
            if (s[i] == s[i - 1])
                b++;
 
            else
                b = 1;
 
            cout << i + 2 - b << " ";
            i += 1;
        }
    }
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        miller();
    }
}