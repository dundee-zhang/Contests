#include <bits/stdc++.h>

int main()
{
    double L, H, W, D;
    std::cin >> L >> H >> W >> D;

    double r = D/2;

    double rV = L * W * H;

    double cV = r * r * H * 3.141592;

    double answer = rV - cV;

    printf("%.2f", answer);
    return 0;
}