#include <bits/stdc++.h>

// i frogging give uppu

int main()
{
    int n, popcorn, boulders;
    int count = 0;
    std::cin >> n;
    std::cin >> popcorn;
    std::cin >> boulders;
    
    int s[2];

    for(int i = 0; i < 2; i++)
    {
        std::cin >> s[i];
    }
    for(int i = 0; i < popcorn; i++)
    {
        int row, col;
        int time;

        std::cin >> row;
        std::cin >> col;
        std::cin >> time;

        if(s[0] == row && s[1] == col)
        {
            count++;
        }

        for(int j = 0; j < time; j++)
        {
            if(s[0] == row && s[1] == col)
            {
                break;
            }
            else
            {
                if(std::abs(row - s[0]) > std::abs(col - s[1]))
                {
                    if(row > s[0])
                    {
                        s[0] += 1;
                    }
                    else if(row == s[0])
                    {
                        s[0] += 0;
                    }
                    else
                    {
                        s[0] -= 1;
                    }
                }
                else if(std::abs(row - s[0]) < std::abs(col - s[1]))
                {
                    if(col > s[1])
                    {
                        s[1] += 1;
                    }
                    else if(col == s[1])
                    {
                        s[1] += 0;
                    }
                    else
                    {
                        s[1] -= 1;
                    }
                }
            }
        }
    }
    for(int i = 0; i < boulders; i++)
    {
        int row, col;
        int time;

        std::cin >> row;
        std::cin >> col;
        std::cin >> time;

        for(int j = 0; j < time; j++)
        {
            if(s[0] == row && s[1] == col)
            {
                count = ((count + 1) / 2) - 1;
            }
            else
            {
                if(std::abs(row - s[0]) > std::abs(col - s[1]))
                {
                    if(col > s[1])
                    {
                        s[1] -= 1;
                    }
                    else
                    {
                        s[1] += 1;
                    }
                }
                else if(std::abs(row - s[0]) < std::abs(col - s[1]))
                {
                    if(row > s[0])
                    {
                        s[0] -= 1;
                    }
                    else
                    {
                        s[0] += 1;
                    }
                }
            }
        }
    }
    std::cout << count;

}