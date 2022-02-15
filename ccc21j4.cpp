#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string b = "";

    std::cin >> b;

    int t = b.length();

    int l = std::count(b.begin(), b.end(), 'L');
    int m = std::count(b.begin(), b.end(), 'M');

    // COUNTING OUT OF PLACE LETTERS
    // ints Ms and s in L section
    int lN = 0;
    for(int i = 0; i < l; i++) {
        if(b.at(i) == 'M') {
            lN++;
        } else if(b.at(i) == 'S') {
            lN++;
        }
    }
    // ints S and Ls in M section
    int mN = 0;
    for(int i = l; i < l + m; i++) {
        if(b.at(i) == 'S') {
            mN++;
        } else if(b.at(i) == 'L') {
            mN++;
        }
    }

    int mInL = 0;
    for(int i = 0; i < l; i++) {
        if(b.at(i) == 'M') {
            mInL++;
        }
    }
    int lInM = 0;
    for(int i = l; i < l + m; i++) {
        if(b.at(i) == 'L') {
            lInM++;
        }
    }
    std::cout << lN + mN - std::min(mInL, lInM) << std::endl;
    
}