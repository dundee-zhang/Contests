#include <bits/stdc++.h>

int check(std::string s) {
    std::string str = s;
    std::reverse(s.begin(), s.end());

    if(s == str) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int l = 0;

    std::string w;
    std::string cS;

    std::cin >> w;

    for(int i = 0; i < w.length(); i++) {

        for(int len = 1; len <= w.length() - i; len++) {
            cS = w.substr(i, len);
            int p = check(cS);

            if(p == 1 && cS.length() > l) {
                l = cS.length();
            }
        }
    }

    std::cout << l;
}