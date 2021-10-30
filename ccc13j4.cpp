#include <bits/stdc++.h>

int main()
{
    std::vector <int> choreMinutes;
    int totalMinutes, totalChores,  inputChoreTime, minutesSum = 0;
    scanf("%i%i", &totalMinutes, &totalChores);

    for(int i = 0; i < totalChores; i++)
    {
        scanf("%i", &inputChoreTime);
        choreMinutes.push_back(inputChoreTime);
    }

    std::sort(choreMinutes.begin(), choreMinutes.end());

    int count = 0;
    while(minutesSum <= totalMinutes)
    {
        minutesSum += choreMinutes.at(count);

        if(minutesSum > totalMinutes)
        {
            break;
        }
        count++;
    }

    printf("%i", count);
}