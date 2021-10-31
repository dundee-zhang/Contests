#include <bits/stdc++.h>

int main()
{
    int c = 0, m = 0, n = 0;

    scanf("%d%d%d", &n, &m, &c);

    int answer = 0;
    answer = c - (n * m);

    printf("%i", answer);
}