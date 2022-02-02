#include <bits/stdc++.h>

int main() {
    int N, i, j;

    scanf("%d%d%d", &N, &i, &j);

    if(abs(N - (i * i)) > abs(N - (j * j))) {
        printf("2\n");
    } else {
        printf("1\n");
    }
}