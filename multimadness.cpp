#include <bits/stdc++.h>

int main() {
    int N;
    unsigned int x, y;
    unsigned long long int p;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d%d", &x, &y);

        p = 1;

        for(int j = x; j <= y; j++) {
            p *= j;
            printf("%d : p is :%lld\n", j, p);
        }

        printf("\n%lld\n", p);

        unsigned long long int a = p % (1000000000 + 7);

        printf("%lld\n", a);
    }
}