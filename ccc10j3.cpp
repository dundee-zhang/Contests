#include <bits/stdc++.h>

int main()
{
    int firstNum = 0;
    char userVariable;
    char userVarTwo;
    int userInput, X = 0, Y = 0;

    while(firstNum != 7)
    {
        std::cin >> firstNum;

        switch(firstNum)
        {
        case 1:
            std::cin >> userVariable >> userInput;

            if(userVariable == 'A')
            {
                X = userInput;
            }
            else
            {
                Y = userInput;
            }
            break;
        case 2:
            std::cin >> userVariable;

            if(userVariable == 'A')
            {
                std::cout << X << std::endl;
            }
            else
            {
                std::cout << Y << std::endl;
            }
            break;

        case 3:
            std::cin >> userVariable >> userVarTwo;

            if(userVariable == 'A')
            {
                if(userVarTwo == 'B')
                {
                    X += Y;
                }
                else
                {
                    X += X;
                }
            }
            else
            {
                if(userVarTwo == 'B')
                {
                    Y += Y;
                }
                else
                {
                    Y += X;
                }
            }
            break;

        case 4:
            std::cin >> userVariable >> userVarTwo;

            if(userVariable == 'A')
            {
                if(userVarTwo == 'B')
                {
                    X *= Y;
                }
                else
                {
                    X *= X;
                }
            }
            else
            {
                if(userVarTwo == 'B')
                {
                    Y *= Y;
                }
                else
                {
                    Y *= X;
                }
            }
            break;

        case 5:
            std::cin >> userVariable >> userVarTwo;

            if(userVariable == 'A')
            {
                if(userVarTwo == 'B')
                {
                    X -= Y;
                }
                else
                {
                    X -= X;
                }
            }
            else
            {
                if(userVarTwo == 'B')
                {
                    Y -= Y;
                }
                else
                {
                    Y -= X;
                }
            }
            break;

        case 6:
            std::cin >> userVariable >> userVarTwo;

            if(userVariable == 'A')
            {
                if(userVarTwo == 'B')
                {
                    X /= Y;
                }
                else
                {
                    X /= X;
                }
            }
            else
            {
                if(userVarTwo == 'B')
                {
                    Y /= Y;
                }
                else
                {
                    Y /= X;
                }
            }
            break;

        default:
            break;
        }
    }
    
}