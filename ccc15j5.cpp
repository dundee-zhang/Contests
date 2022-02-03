#include <cstdio>

// TLE solution

int solving(int piNum, int people, int minimum)
{
    // if the number of pie * people is the same as pi, only 1 way to give out the pie
    if(minimum * people == piNum)
    {
        // return the answer 1
        return 1;
    }

    // if there is 1 person, there is only one way to get the pi
    if(people == 1)
    {
        // return the answer 1
        return 1;
    }
  
    int sum = 0;
    for(int i = minimum; piNum / people >= i; i++)
    {
      sum += solving(piNum - i, people - 1, i);
    }
    return sum;
}

int main()
{
    int pi, people;
    scanf("%i%i", &pi, &people);
  
    printf("%i", solving(pi, people, 1));

    return 0;
}