#include <bits/stdc++.h>

int main() {
    int q;
    int a, b, c;
    int p = 0;

    scanf("%d%d%d%d", &q, &a, &b, &c);

    while(true) {
        q--;
        a++;
        p++;
        if(a == 35) {
            a = 0;
            q += 30;
        }
        if(q == 0) {
            break;
        }
        
        q--;
        b++;
        p++;
        if(b == 100) {
            b = 0;
            q += 60;
        }
        if(q == 0) {
            break;
        }
        
        q--;
        c++;
        p++;
        if(c == 10) {
            c = 0;
            q += 9;
        }
        if(q == 0) {
            break;
        }
    }
    printf("Martha plays %d times before going broke.", p);
}