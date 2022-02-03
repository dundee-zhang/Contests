#include <bits/stdc++.h>

int main() {
    int n;

    std::cin >> n;

    int f[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> f[i][j];
        }
    }

    if(f[0][0] < f[0][n - 1] && f[0][0] < f[n - 1][0]) { // 0 / 360
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                std::cout << f[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    if(f[0][0] > f[0][n - 1] && f[0][0] < f[n - 1][0]) { // 270cc
        for(int i = n - 1; i >= 0; i--) {
            for(int j = 0; j < n; j++) {
                std::cout << f[j][i] << " ";
            }
            std::cout << std::endl;
        }
    }

    if(f[0][0] > f[0][n - 1] && f[0][0] > f[n - 1][0]) { // 180 cc
        for(int i = n - 1; i >= 0; i--) {
            for(int j = n - 1; j >= 0; j--) {
                std::cout << f[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    if(f[0][0] < f[0][n - 1] && f[0][0] > f[n - 1][0]) { // 90cc
        for(int i = 0; i < n; i++) {
            for(int j = n - 1; j >= 0; j--) {
                std::cout << f[j][i] << " ";
            }
            std::cout << std::endl;
        }
    }
}