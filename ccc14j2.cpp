#include <bits/stdc++.h>

int main() {
    int v;
    size_t a = 0, b = 0;
    std::string l;

    scanf("%d", &v);

    std::cin >> l;

    a = std::count(l.begin(), l.end(), 'A');
    b = std::count(l.begin(), l.end(), 'B');

    if(a > b) {
        printf("A");
    }
    if(a < b) {
        printf("B");
    }
    if(a == b) {
        printf("Tie");
    }
}