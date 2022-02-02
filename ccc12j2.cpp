#include <bits/stdc++.h>

int main() {
    int f[4];

    for(int i = 0 ; i < 4; i++) {
        scanf("%d", &f[i]);
    }

    if(f[0] == f[1] && f[1] == f[2] && f[2] == f[3]) {
        printf("Fish At Constant Depth");
    } else if(f[0] > f[1] && f[1] > f[2] && f[2] > f[3]) {
        printf("Fish Diving");
    } else if(f[0] < f[1] && f[1] < f[2] && f[2] < f[3]) {
        printf("Fish Rising");
    } else {
        printf("No Fish");
    }
}