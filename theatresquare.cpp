#include <bits/stdc++.h>

int main() {
    double n, m, a;
    scanf("%lf%lf%lf", &n, &m, &a);

    printf("%.0f", std::ceil(m / a) * std::ceil(n / a));
}