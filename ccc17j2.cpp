#include <bits/stdc++.h>

int main()
{
    int N, k, tens {1};

    scanf("%i%i", &N, &k);
    int n = N;

    for(int i = 0; i < k; i++)
    {
        tens *= 10;
        N += (n * tens);
    }

    std::cout << N;
}