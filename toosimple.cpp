#include <bits/stdc++.h>

int main() {
    // Hello, World!
    bool one = true;
    int z = one;
    bool zero = false;
    int x = zero;
    char nTwo = z + z;
    char nSix = z + z + z + z + z + z;

    int H = (pow(nTwo, nSix)) + nTwo + nTwo + nTwo + nTwo;
    int e = (pow(nTwo, nSix + z)) - nSix - nSix - nSix - nSix - nTwo - z;
    int l = (pow(nTwo, nSix + z)) - nSix - nSix - nSix - nTwo;
    int o = (pow(nTwo, nSix + z)) - nSix - nSix - nTwo - nTwo - z;
    int space = (pow(nTwo, nSix - z));
    int comma = (pow(nTwo, nSix - z)) + nSix + nSix;
    int W = (pow(nTwo, nSix)) + nSix + nSix + nSix + nSix - z;
    int r = (pow(nTwo, nSix + z)) - nSix - nSix - nTwo;
    int d = (pow(nTwo, nSix)) + nSix + nSix + nSix + nSix + nSix + nSix;
    int mark = (pow(nTwo, nSix - z)) + z;
    char string[] = {H, e, l, l, o, comma, space, W, o, r, l, d, mark, x};
    std::cout << string << std::endl;
}