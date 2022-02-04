#include <bits/stdc++.h>

int main() {
    int f, m, b;
    int t = 0;

    std::cin >> f >> m >> b;

    int a, l, c;

    std::cin >> a >> l >> c;

    for(int i = 0; i < a; i++) {
        t += f;
    }
    for(int i = 0; i < l; i++) {
        t += m;
    }
    for(int i = 0; i < c; i++) {
        t += b;
    }

    std::cout << a + l + c << " " << t << std::endl;
}