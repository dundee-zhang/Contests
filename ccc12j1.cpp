#include <bits/stdc++.h>

int main() {
    int l, s;
    int f = 0;

    scanf("%d%d", &l, &s);

    if(s <= l) {
        printf("Congratulations, you are within the speed limit!");
    } else {
        if(s - l <= 20) {
            f = 100;
        } else if(s - l <= 30) {
            f = 270;
        } else {
            f = 500;
        }

        printf("You are speeding and your fine is $%d.", f);
    }
}