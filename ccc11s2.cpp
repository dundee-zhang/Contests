#include <bits/stdc++.h>

int main()
{
    std::vector <char> studentAnswer;
    std::vector <char> answerKey;
    int N;
    scanf("%i", &N);

    char studentChar, answerChar;
    int count = 0;

    for(int inputOne = 0; inputOne < N; inputOne++)
    {
        std::cin >> studentChar;
        studentAnswer.push_back(studentChar);
    }

    for(int inputTwo = 0; inputTwo < N; inputTwo++)
    {
        std::cin >> answerChar;
        answerKey.push_back(answerChar);
    }

    for(int i = 0; i < N; i++)
    {
        if(answerKey.at(i) == studentAnswer.at(i))
        {
            count++;
        }
    }
    printf("%i", count);
}