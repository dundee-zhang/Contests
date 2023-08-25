#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vect vector
#define iamspeed cin.sync_with_stdio(0); cin.tie(); cout.tie();
#define pb push_back
#define pob pop_back
#define mp make_pair

using namespace std;

// variables
int t, s, f;

int func(int n) {
    switch(n % 4) {
        case 0:
            return n;
        case 1:
            return 1;
        case 2:
            return n + 1;
        default:
            return 0;
    }
}

int main() {
    iamspeed;
    // code start
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> s >> f;
        std::cout << (func(s - 1) ^ func(f)) << std::endl;
    }  
    return 0;
}