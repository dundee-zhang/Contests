#include <bits/stdc++.h>

int main() {
    std::vector <std::string> a;
    std::vector <std::string> b;
    std::string input;

    bool good = true;

    int n;

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> input;
        a.push_back(input);
    }

    for(int i = 0; i < n; i++) {
        std::cin >> input;
        b.push_back(input);
    }

    for(int i = 0; i < n; i++) {
        if(a.at(i) == b.at(i)) {
            good = false;
        }
    }

    for(int i = 0; i < n; i++) {
        std::string na = a.at(i);
        std::string nb = b.at(i);

        if(!(b.at(std::find(a.begin(), a.end(), nb) - a.begin()) == na)) {
            good = false;
        }
    }

    if(good) {
        std::cout << "good";
    } else {
        std::cout << "bad";
    }
}