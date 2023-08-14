#include <bits/stdc++.h>
// ccc15s3

int main() {
    std::cin.sync_with_stdio(0);
    std::cin.tie();

    int g, p;
    std::cin >> g >> p;

    bool gates[100000] = {0};
    int plane, count = 0;
    while(1) {
        std::cin >> plane;
        for(int i = plane - 1; i >= 0; i--) {
            if(!gates[i]) {
                gates[i] = true;
                count++;
                break;
            }
            if(i == 0) {
                std::cout << count << '\n';
                return 0;
            }
        }
    }
}
