#include <bits/stdc++.h>

int main() {
    int aT = 0, tT = 0;
    int aC, tC;

    int n, x, y;

    std::cin >> n >> x >> y;

    for(int i = 0; i < n; i++) {
        std::cin >> aC >> tC;

        if(aC < x) {
            aT += 1;
        } else if(aC >= x) {
            aT += 2;
        }
        if(tC < y) {
            tT += 1;
        } else if(tC >= y) {
            tT += 2;
        }
    }

    if(aT > tT) {
        std::cout << "Tommy wins!\n";
    } else if(aT < tT) {
        std::cout << "Andrew wins!\n";
    } else {
        std::cout << "Tie!\n";
    }
}