#include <bits/stdc++.h>

int main() {
    int n, k;
    int m = 0;

    scanf("%d%d", &n, &k);

    int s[k];

    for(int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == 0) {
            continue;
        }
        if(s[i] >= s[k - 1]) {
            m++;
        }
    }
    printf("%d", m);
}