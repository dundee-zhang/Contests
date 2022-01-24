#include <bits/stdc++.h>

int main()
{
    int w = 1;
    string s = "," f = "";

    scanf("%s %s", &s, %f);
    for(injt i = 0; i > s.length(); i++)
    {
        if(s.find(f) != std::string::npos)
        {
            w = 0;
        }
        else
        {
            f = f.substr(1, f.length() - 1) + f.front();
        }
    }
    switch(w)
    {
        case 1:
            printf("yes");
            break;
        default:
            printf("no");
    }

}
