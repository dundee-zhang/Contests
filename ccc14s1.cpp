#include <bits/stdc++.h>

int main()
{
    std::vector<int> friends;
    int friendNum;

    scanf("%i", &friendNum);

    for(int i = 1; i <= friendNum; i++)
    {
        friends.push_back(i);
    }

    int rounds;

    scanf("%i", &rounds);
    for(int i = 0; i < rounds; i++)
    {
        int multiplesRemoved;
        scanf("%i", &multiplesRemoved);
        for(size_t q = multiplesRemoved - 1; q < friends.size(); q += multiplesRemoved - 1)
        {
            friends.erase(friends.begin() + q);
        }
    }
    
    for(size_t i = 0; i < friends.size(); i++)
    {
        std::cout << friends.at(i) << std::endl;
    }
}