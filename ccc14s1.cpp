#include <bits/stdc++.h>
int main() {
    std::vector<int> friends;
    int friendNum, rounds, multiplesRemoved;
    
    scanf("%i%i", &friendNum, &rounds);
    
    for(int i = 1; i <= friendNum; i++)
        friends.push_back(i);
    
    for(int i = 0; i < rounds; i++) {
        scanf("%i", &multiplesRemoved);
        for(size_t q = multiplesRemoved - 1; q < friends.size(); q += multiplesRemoved - 1)
            friends.erase(friends.begin() + q);
    }
    
    for(size_t i = 0; i < friends.size(); i++)
        std::cout << friends.at(i) << std::endl;
}
