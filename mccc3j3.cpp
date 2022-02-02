#include <bits/stdc++.h>

char mostFrequent(std::string text) {
    int max = 0;
    int count = 0;
    char maxCharacter;
    for (char q = ' '; q <= '~'; q++)

    {
        count = 0;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == q)
                count++;
        }

        if (count > max) {
            max = count;
            maxCharacter = q;
        }
    }

    return maxCharacter;
}

int main() {
    int sN, tN;
    int count = 0;
    int newCount = 0;
    char oldChar = ' ';

    scanf("%d%d", & sN, & tN);

    std::string S, T;

    std::cin >> S >> T;

    char m = mostFrequent(S);

    for (int i = 0; i < sN; i++) {
        for (int j = 0; j < tN; j++) {
            if (S.at(i) == T.at(j)) {
                count++;
            }
        }
    }

    for(int k = 0; k < tN; k++) {
        oldChar = T.at(k);
        T.at(k) = m;
        newCount = 0;
        for (int i = 0; i < sN; i++) {
            for (int j = 0; j < tN; j++) {
                if (S.at(i) == T.at(j)) {
                    newCount++;
                }
            }
        }
        if(newCount > count) {
            count = newCount;
        }
        T.at(k) = oldChar;
    }

    printf("%d\n", count);

}