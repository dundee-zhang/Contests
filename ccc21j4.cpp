#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s;

    std::cin >> s;

    int l = std::count(s.begin(), s.end(), 'L');
    int m = std::count(s.begin(), s.end(), 'M');

    int notL = 0;
    for(int i = 0; i < l; i++) {
        if(s.at(i) != 'L') {
            notL++;
        }
    }
    int notM = 0;
    for(int i = l; i < l + m; i++) {
        if(s.at(i) != 'M') {
            notM++;
        }
    }
    int mInL = 0;
    for(int i = 0; i < l; i++) {
        if(s.at(i) == 'M') {
            mInL ++;
        }
    }
    int lInM = 0;
    for(int i = l; i < l + m; i++) {
        if(s.at(i) == 'L') {
            lInM ++;
        }
    }
    std::cout << notL + notM - std::min(mInL, lInM) << std::endl;
}