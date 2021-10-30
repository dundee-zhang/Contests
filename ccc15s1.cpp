#include <iostream>
#include <cstdio>
#include <vector>

int main()
{
    int c;
    scanf("%d", &c);

    std::vector<int> answer;

    for(size_t i = 0; i < c; i++)
    {
        int x;
        scanf("%d", &x);

        switch(x)
        {
        case 0:
            answer.pop_back();
            break;

        default:
            answer.push_back(x);
        }
    }

    int print = 0;
    
    for(size_t i = 0; i < answer.size(); i++)
    {
        print += answer.at(i);
    }
    printf("%d", print);
}