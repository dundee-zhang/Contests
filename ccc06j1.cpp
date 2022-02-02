#include <bits/stdc++.h>

int main() {
    int a, b, c, d;
    int t = 0;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    switch(a) {
        case 1:
            t += 461;
            break;
        case 2:
            t += 431;
            break;
        case 3:
            t += 420;
            break;
        default:
            break;
    }

    switch(b) {
        case 1:
            t += 100;
            break;
        case 2:
            t += 57;
            break;
        case 3:
            t += 70;
            break;
        default:
            break;
    }

    switch(c) {
        case 1:
            t += 130;
            break;
        case 2:
            t += 160;
            break;
        case 3:
            t += 118;
            break;
        default:
            break;
    }

    switch(d) {
        case 1:
            t += 167;
            break;
        case 2:
            t += 266;
            break;
        case 3:
            t += 75;
            break;
        default:
            break;
    }

    printf("Your total Calorie count is %d.", t);
}