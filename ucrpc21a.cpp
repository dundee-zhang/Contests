#include <bits/stdc++.h>

int main()
{
    int n, m;
    std::string userChar;
    std::cin >> n >> m;
    char train[n][m];

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cin >> train[i][j];

            if(train[i][j] == 't')
            {
                count++;
            }
        }
    }
    std::cout << count;
}