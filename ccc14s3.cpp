#include <bits/stdc++.h>

int main() {
    int test;

    std::cin >> test;

    for(int i = 0; i < test; i++) {
        int n;
        std::cin >> n;

        std::vector <int> mountain;
        std::vector <int> branch;

        for(int j = 0; j < n; j++) {
            int current;
            std::cin >> current;
            mountain.push_back(current);
        }

        int req = 1;

        bool guessed = true;

        while(guessed && req <= n) {
            if(mountain.size() > 0 && req == mountain.back()) {
                mountain.pop_back();
                req++;
            } else if(branch.size() > 0 && branch.back() == req) {
                branch.pop_back();
                req++;
            } else if(mountain.back() > 0) {
                branch.push_back(mountain.back());
                mountain.pop_back();
            } else {
                guessed = false;
            }
        }
        if(guessed == false) {
            std::cout << "N\n";
        } else {
            std::cout << "Y\n";
        }
    }
}