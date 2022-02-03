#include <bits/stdc++.h>
// solution doens't work
int main() {
    int n;

    std::cin >> n;
    std::vector <int> t;
    std::vector <int> low;
    std::vector <int> high;
    int tide;
    int index;

    for(int i = 0; i < n; i++) {
            std::cin >> tide;
            t.push_back(tide);
    }
    std::sort(t.begin(), t.end());

    if(n % 2 != 0) {
        index = (n / 2) + 1;
        
        for(int i = 0; i < index; i++) {
            low.push_back(t.at(i));
        }

        for(int i = (n - 1); i >= index; i--) {
            high.push_back(t.at(i));
        }

        std::sort(low.begin(), low.end());
        std::reverse(low.begin(), low.end());
        std::sort(high.begin(), high.end());

        for(int i = 0; i < index - 1; i++) {
            std::cout << low.at(i) << " ";
            std::cout << high.at(i) << " ";
        }
        std::cout << low.back();
    } else {
        index = n / 2;

        for(int i = 0; i < index; i++) {
            low.push_back(t.at(i));
        }

        for(int i = (n - 1); i >= index; i--) {
            high.push_back(t.at(i));
        }

        std::sort(low.begin(), low.end());
        std::reverse(low.begin(), low.end());
        std::sort(high.begin(), high.end());

        for(int i = 0; i < index; i++) {
            std::cout << low.at(i) << " ";
            std::cout << high.at(i) << " ";
        }
    }
}