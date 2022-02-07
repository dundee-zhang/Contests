#include <bits/stdc++.h>
// tle on 2nd 
int main() {
    int n = 0;
    int total = 0;
    int right = 0;
    int left = 0;
    int yes = 0;
    int pos = 0;

    scanf("%d", &n);

    int m[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &m[i]);

        total += m[i];
    }

    if(total % 2 != 0) {
        printf("Andrew is sad.\n");
        return 0;
    }

    for(int i = 1; i < n; i++) {
        right = 0;
        left = 0;

        for(int j = 0; j < i; j++) {
            right += m[j];
            pos = j + 1;
        }
        for(int j = i; j < n; j++) {
            left += m[j];
        }

        if(right == left) {
            yes = 1;
            break;
        }
    }

    if(yes == 0) {
        printf("Andrew is sad.\n");
    } else {
        printf("%d\n", pos);
    }
}