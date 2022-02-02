#include <bits/stdc++.h>

int main() {
    int N, K;
    int w = 0;

    std::string S;

    scanf("%d%d", &N, &K);

    std::cin >> S;

    for(int i = 0; i < N; i++) {
        if(S.at(i) == 'U') {
            if(K > 0) {
                K--;
            } else {
                K += 0;
            }
        }
        if(S.at(i) == 'D') {
            K++;
        }
        if(K == 0) {
            w++;

        }
    }
    printf("%d\n", w);
}