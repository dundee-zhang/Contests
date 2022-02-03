#include <bits/stdc++.h>

int altitude(int h, int t) {
    int A = (-6 * pow(t, 4)) + (h * pow(t, 3)) + (2 * pow(t, 2)) + t;

    return A;
}
int main() {
    int h, M;
    int time = -727;

    std::cin >> h >> M;
    if(altitude(h, M) > 0) {
        std::cout << "The balloon does not touch ground in the given time.";
        return 0;
    }

    for(int i = 1; i < M; i++) {
        int a = altitude(h, i);

        if(a <= 0) {
            time = i;
            printf("The balloon first touches ground at hour:\n%d", time);
            return 0;
        }
    }
}