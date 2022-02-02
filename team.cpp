#include <bits/stdc++.h>

int main() {
    int r;
    int s;
    int o; 
    int a = 0;

    scanf("%d", &r);

    for(int i = 0; i < r; i++) {
        o = 0;
        for(int j = 0; j < 3; j++) {
            scanf("%d", &s);
            if(s == 1) {
                o++;
            }
        }
        if(o >= 2) {
            a++;
        }
    }
    printf("%d", a);
}