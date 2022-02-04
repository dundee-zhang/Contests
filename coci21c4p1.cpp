#include <bits/stdc++.h>
// i hate this question
int main() {
    int n;
    int c = 0;

    std::cin >> n;

    int d[n];

    for(int i = 0; i < n; i++) {
        std::cin >> d[i];
    }

    for(int i = 0; i < n - 1; i++) {
        if(n == 1) {
            break;
        }
        c += d[i] + d[i + 1];
    }

    std::cout << c;
}