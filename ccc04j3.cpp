#include <bits/stdc++.h>

int main()
{
    int n, m;
    std::string userInput;
    std::vector <std::string> adjectives;
    std::vector <std::string> nouns;

    scanf("%i%i", &n, &m);

    for(int i = 0; i < n; i++)
    {
        std::cin >> userInput;
        adjectives.push_back(userInput);
    }
    for(int i = 0; i < m; i++)
    {
        std::cin >> userInput;
        nouns.push_back(userInput);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << adjectives.at(i) << " as " << nouns.at(j) << std::endl;
        }
    }
}