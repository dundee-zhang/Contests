#include <bits/stdc++.h>
int main()
{
    int w = 1;

    std::string s = "", f = "";
    int l = s.length();
    std::cin >> s >> f;

    for(int i = 0; i < l; i++) {
        if(s.find(f) != std::string::npos) {
            printf("yes");
            return 0;
        }
        else {
            f = f.substr(1, f.length() - 1) + f.front();
        }
    }

    printf("no");
}
