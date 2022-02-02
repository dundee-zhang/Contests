#include <bits/stdc++.h>

int main() {
    int s = 1;
    int r;

    while(s != 100) {
        scanf("%d", &r);

        s += r;

        if(r == 0) {
            printf("You Quit!");
            break;
        }

        switch(s) {
            case 9:
                s = 34;
                printf("You are now on square %d\n", s);
                break;
            case 40:
                s = 64;
                printf("You are now on square %d\n", s);
                break;
            case 54:
                s = 19;
                printf("You are now on square %d\n", s);
                break;
            case 67:
                s = 86;
                printf("You are now on square %d\n", s);
                break;
            case 90:
                s = 48;
                printf("You are now on square %d\n", s);
                break;
            case 99:
                s = 77;
                printf("You are now on square %d\n", s);
                break;
            default:
                if(s > 100) {
                    s -= r;
                    printf("You are now on square %d\n", s);
                } else {
                    printf("You are now on square %d\n", s);
                }
                break;
        }
    }
    if(s >= 100) {
        printf("You Win!");
    }
}