#include <bits/stdc++.h>
 
 
int main() {
    int n;
    scanf("%d", &n);
    for( int j = 0; j < n ; j++) {
        int t;
        scanf("%d", &t);
        int a[t];
        int b[t];
        int max_num = 0;
        for (int i = 0; i < t; i++) {
            scanf("%d %d", &a[i], &b[i]);
            if (a[i] < b[i]) {
                int k = a[i];
                a[i] = b[i];
                b[i] = k;
            }
            if (max_num < a[i]){
                max_num = a[i];
            }
        }
        long long ch = 2 * max_num;
        for (int i = 0; i < t; i++) {
            ch += 2 * b[i];
        }
 
        printf("%lld\n", ch);
    }
    return 0;
}