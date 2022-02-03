#include <bits/stdc++.h>

int main() {
    int count = 0;
    int d, c, p;

    std::cin >> p >> c;

    std::cout << "THIS RUNS";

    while(true) {
        d = abs(c - p);

        p = c;

        c = d;

        count++;

        if(p < c) {
            break;
        }
    }
    std::cout << count;
}

// c++ is shit language