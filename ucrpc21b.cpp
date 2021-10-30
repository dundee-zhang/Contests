#include <bits/stdc++.h>

int main()
{
    std::vector <int> positions;

    for(int i = 1; i < 6; i++)
    {
        positions.push_back(i);
    }

    int swapNum;

    scanf("%i", &swapNum);

    for(int i = 0; i < swapNum; i++)
    {
        int tempOne;
        int numOne, numTwo;

        std::cin >> numOne;
        std::cin >> numTwo;

        numOne--;
        numTwo--;

        tempOne = positions.at(numOne);
        positions.at(numOne) = positions.at(numTwo);
        positions.at(numTwo) = tempOne;
    }
    for(int i = 0; i < 5; i++)
    {
        if(positions.at(i) == 3)
        {
            std::cout << i + 1;
        }
    }
}