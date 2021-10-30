#include <bits/stdc++.h>

int main()
{
    int S, M, L;
    scanf("%i%i%i", &S, &M, &L);

    if(1 * S + 2 * M + 3 * L >= 10)
    {
        printf("happy");
    }
    else {printf("sad");}
    return 0;
}