#include <bits/stdc++.h>

int main()
{
    int pieceNum;
    int roundNum;
    int teamOne = 0, teamTwo = 0;
    int a, b, c, d;

    std::cin >> pieceNum;
    std::cin >> roundNum;

    for(int i = 0; i < roundNum; i++)
    {
        std::cin >> a >> b >> c >> d;

        teamOne += (a * b);
        teamTwo += (c * d);

        if(teamOne >= pieceNum && teamTwo >= pieceNum)
        {
            printf("It's a tie at round %i!", i + 1);
            break;
        }
        else if(teamOne >= pieceNum && teamTwo < pieceNum)
        {
            printf("Team 1 wins at round %i!", i + 1);
            break;
        }
        else if(teamOne < pieceNum && teamTwo >= pieceNum)
        {
            printf("Team 2 wins at round %i!", i + 1);
            break;
        }
    }
    if(teamOne < pieceNum && teamTwo < pieceNum)
    {
        std::cout << "Oh no!";
    }
}