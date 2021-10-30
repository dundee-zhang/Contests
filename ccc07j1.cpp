#include <iostream>
#include <cstdio>
#include <vector>

int main()
{
    std::vector<int> x;
    int t;

    for(int i = 0; i < 3; i++)
    {
        scanf("%i", &t);
        x.push_back(t);
    }
    
    sort(x.begin(), x.end());

    printf("%i", x.at(1));

}