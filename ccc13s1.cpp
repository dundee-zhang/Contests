#include <bits/stdc++.h>

int main()
{
    bool repeated = true;
    int year;

    scanf("%i", &year);

    while(repeated)
    {
        year++;
        int breakingYear = year;
        int alreadySeen[10] = {0}, remain;
        while(breakingYear)
        {
            remain = breakingYear % 10;

            if(alreadySeen[remain] == 1)
            {
                repeated = true;
                break;
            }
            else
            {
                alreadySeen[remain] = 1;
            }

            breakingYear /= 10;
            repeated = false;
        }
    }
    std::cout << year;
}