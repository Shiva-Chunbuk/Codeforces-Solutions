#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
 
        int max_die = s - r; // maximum value on the stolen die
        cout << max_die << " "; // print the maximum value
        long long reminder=r%(n-1);
        long long mid=r/(n-1);
        for (int i = 1; i < n; i++)
{        if(reminder<=0){
cout<<mid<<" ";
        }
        else
            cout<<mid+1<<" ";
            reminder--;
        cout << endl;
    }
}
}