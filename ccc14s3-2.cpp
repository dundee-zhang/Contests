#include <bits/stdc++.h>
// ccc14s3

int main() {
    std::cin.sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n, t;
    std::cin >> t;

    for(int i = 0; i < t; i++) {
        std::stack<int> lake, mt;
        int current = 1;

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
            if(!mt.empty() && (int) mt.top() == current) {
                mt.pop();
                current++;
            } else if(!lake.empty() && (int) lake.top() == current){
                lake.pop();
                current++;
            } else if(mt.empty() && lake.top() != current) {
                std::cout << "N\n";
                break;
            } else {
                lake.push(mt.top());
                mt.pop();
            }
        }
    }
}
