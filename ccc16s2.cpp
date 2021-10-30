#include <bits/stdc++.h>

int main()
{
    int questionNumber, peopleNumber;


    scanf("%i%i", &questionNumber, &peopleNumber);


    if(questionNumber == 1)
    {
        int totalSpeed = 0;
        std::vector <int> dmojistan;
        std::vector <int> pegland;

        int enteredInt;

        for(int i = 0; i < peopleNumber; i++)
        {
            std::cin >> enteredInt;
            dmojistan.push_back(enteredInt);
        }
        for(int i = 0; i < peopleNumber; i++)
        {
            std::cin >> enteredInt;
            pegland.push_back(enteredInt);
        }

        std::sort(dmojistan.begin(), dmojistan.end());
        std::sort(pegland.begin(), pegland.end());

        for(int i = 0; i < peopleNumber; i++)
        {
            totalSpeed += std::max(dmojistan.at(i), pegland.at(i));
        }
        std::cout << totalSpeed;
    }
    else
    {
        int totalSpeed = 0;
        std::vector <int> dmojistan;
        std::vector <int> pegland;

        int enteredInt;

        for(int i = 0; i < peopleNumber; i++)
        {
            std::cin >> enteredInt;
            dmojistan.push_back(enteredInt);
        }
        for(int i = 0; i < peopleNumber; i++)
        {
            std::cin >> enteredInt;
            pegland.push_back(enteredInt);
        }

        std::sort(dmojistan.begin(), dmojistan.end());
        std::sort(pegland.begin(), pegland.end());
        std::reverse(pegland.begin(), pegland.end());

        for(int i = 0; i < peopleNumber; i++)
        {
            totalSpeed += std::max(dmojistan.at(i), pegland.at(i));
        }
        std::cout << totalSpeed;
    }
}