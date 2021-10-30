#include <bits/stdc++.h>

int main()
{
    int x;
    double y;
    std::cin >> x >> y;

    if(x > y)
    {
        printf("%.2f", y);
    }
    else
    {
        if(x % 5 != 0)
        {
            printf("%.2f", y);
        }
        else
        {
            double answer = y - 0.5 - x;
            printf("%.2f", answer);
        }
    }
}