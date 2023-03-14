#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, feleve, seleve;
    cin >> i;
 
    while (i--) {
        long long a, b, c;
        cin >> a >> b >> c;
        feleve = a - 1;
        if (b > c)
            seleve = b - 1;
        else
            seleve = 2 * c - b - 1;
        if (feleve == seleve)
            cout << "3" << endl;
        else if (feleve > seleve)
            cout << 2 << endl;
        else
            cout << "1" << endl;
    }
}
                             