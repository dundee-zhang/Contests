#include <bits/stdc++.h>

// https://dmoj.ca/problem/ccc05j3

int main()
{
    std::vector <std::string> streetName;
    std::vector <char> streetDirection;
    
    std::string inputStreet;
    char inputChar;

    while(true)
    {
        std::cin >> inputChar >> inputStreet;

        streetName.push_back(inputStreet);
        streetDirection.push_back(inputChar);
        
        if(inputStreet == "SCHOOL")
        {
            break;
        }
    }

    streetName.pop_back();

    std::reverse(streetName.begin(), streetName.end());
    std::reverse(streetDirection.begin(), streetDirection.end());

    streetName.push_back("HOME");

    for(int i = 0; i < streetDirection.size(); i++)
    {
        if(streetDirection.at(i) == 'R')
        {
            if(streetName.at(i) == "HOME")
            {
                printf("Turn LEFT into your HOME.");
            }
            else
            {
                printf("Turn LEFT onto ");
                std::cout << streetName.at(i);
                printf(" street.\n");
            }
        }
        else
        {
            if(streetName.at(i) == "HOME")
            {
                printf("Turn RIGHT into your HOME.");
            }
            else
            {
                printf("Turn RIGHT onto ");
                std::cout << streetName.at(i);
                printf(" street.\n");
            }
            
        }
    }
}