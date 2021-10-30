#include <bits/stdc++.h>

int main()
{
    int input[5];
    std::string lastOption = "";

    while(true)
    {
        for(int i = 0; i < 5; i++)
        {
            scanf("%1i", &input[i]);
        }
        if((input[0] + input[1]) % 2 == 1)
        {
            printf("left %i%i%i\n", input[2], input[3], input[4]);
            lastOption = "left";
        }
        else if((input[0] + input[1]) % 2 == 0)
        {
            if(input[0] + input[1] == 0)
            {
                std::cout << lastOption;
                printf(" %i%i%i\n", input[2], input[3], input[4]);
            }
            else if(input[0] + input[1] + input[2] + input[3] + input[4] == 45)
            {
                break;
            }
            else
            {
                printf("right %i%i%i\n", input[2], input[3], input[4]);
                lastOption = "right";
            }
        }
    }
	return 0;
}