#include <bits/stdc++.h>
// ccc14s3

int main() {
    std::cin.sync_with_stdio(0);
    std::cin.tie();
    int n, t;
    std::cin >> t;

    for(int i = 0; i < t; i++) {
        std::stack<int> lake;
        int branch = 0;
        std::stack<int> mt;
        std::cin >> n;
        for(int temp, x = 0; x < n; x++) {
            std::cin >> temp;
            mt.push(temp);
        }
        while(true) {
            if(mt.empty() && lake.empty()) {
                std::cout << "Y\n";
                break;
            }
            if(!mt.empty() && (int) mt.top() == branch + 1) {
                mt.pop();
                branch++;
            } else if(!lake.empty() && (int) lake.top() == branch + 1){
                lake.pop();
                branch++;
            } else if(mt.empty() && lake.top() != branch + 1) {
                std::cout << "N\n";
                break;
            } else {
                lake.push(mt.top());
                mt.pop();
            }
        }
    }

}
