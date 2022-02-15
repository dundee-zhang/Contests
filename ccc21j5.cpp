#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int m = 0, n = 0;

    std::cin >> m >> n;

    bool mCommands[m + 1], nCommands[n + 1];
    for(int i = 1; i <= m; i++) {
        mCommands[i] = false;
    }
    for(int i = 1; i <= n; i++) {
        nCommands[i] = false;
    }

    int k;
    std::cin >> k;

    char letter;
    int number;
    for(int i = 0; i < k; i++) {
        std::cin >> letter >> number;

        if(letter == 'R') {
            mCommands[number] = !mCommands[number];
        } else {
            nCommands[number] = !nCommands[number];
        }
    }

    bool grid[m + 1][n + 1];

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            grid[i][j] = false;
        }
    }

    for(int i = 1; i <= m; i++) {
        if(mCommands[i]) {
            for(int j = 1; j <= n; j++) {
                grid[i][j] = !grid[i][j];
            }
        }
    }
    for(int j = 1; j <= n; j++) {
        if(nCommands[j]) {
            for(int i = 1; i <= m; i++) {
                grid[i][j] = !grid[i][j];
            }
        }
    }

    int count = 0;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(grid[i][j]) {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
}