#include <bits/stdc++.h> 

int main() {
    int w = 0;
    char g[6];

    for(int i = 0; i < 6; i++) {
        std::cin >> g[i];

        if(g[i] == 'W') {
            w++;
        }
    }
    if(w >= 5) {
        printf("1");
    } else if(w >= 3) {
        printf("2");
    } else if(w >= 1) {
        printf("3");
    } else {
        printf("-1");
    }
}