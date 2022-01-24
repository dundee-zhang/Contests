#include <bits/stdc++.h>

int main()
{
    int w = 1;

    std::string s = "", f = "";
    int l = s.length();
    int* p = &l;
    std::cin >> s >> f;

    for(int i = 0; i < p; i++) {
        if(s.find(f) != std::string::npos) {
            w = 0;
            printf("yes");
            break;
        }
        else {
            f = f.substr(1, f.length() - 1) + f.front();
        }
    }

    switch(w) {
        case 1:
            printf("no");
    }
}
