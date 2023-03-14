#include<bits/stdc++.h>
using namespace std;
int main() {
 int test;
 cin >> test;
 while (test--) {
     int arr[4];
     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
     int output = 0;
     for (int i = 1; i < 4; i++) {
         if (arr[i] > arr[0]) {
             output++;
         }
     }
     cout << output << endl;
 }
}