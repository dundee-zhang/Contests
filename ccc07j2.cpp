#include <iostream>
#include <vector>
#include <cstring>

int main()
{
    std::string text;
    std::cin >> text;
    while(text != "TTYL")
    {
        if(text == "CU")
        {
            std::cout << "see you" << std::endl;
            std::cin >> text;
        }
        else if(text == ":-)")
        {
            std::cout << "I'm happy" << std::endl;
            std::cin >> text;
        }
        else if(text == ":-(")
        {
            std::cout << "I'm unhappy" << std::endl;
            std::cin >> text;
        }
        else if(text == ";-)")
        {
            std::cout << "wink" << std::endl;
            std::cin >> text;
        }
        else if(text == ":-P")
        {
            std::cout << "stick out my tongue" << std::endl;
            std::cin >> text;
        }
        else if(text == "(~.~)")
        {
            std::cout << "sleepy" << std::endl;
            std::cin >> text;
        }
        else if(text == "TA")
        {
            std::cout << "totally awesome" << std::endl;
            std::cin >> text;
        }
        else if(text == "CCC")
        {
            std::cout << "Canadian Computing Competition" << std::endl;
            std::cin >> text;
        }
        else if(text == "CUZ")
        {
            std::cout << "because" << std::endl;
            std::cin >> text;
        }
        else if(text == "TY")
        {
            std::cout << "thank you" << std::endl;
            std::cin >> text;
        }
        else if(text == "YW")
        {
            std::cout << "you're welcome" << std::endl;
            std::cin >> text;
        }
        else
        {
            std::cout << text << std::endl;
            std::cin >> text;
        }

        if(text == "TTYL")
        {
            std::cout << "talk to you later" << std::endl;
        }
    }
    
}