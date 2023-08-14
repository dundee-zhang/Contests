#include <bits/stdc++.h>
// ccc00s2

int main() {
    std::cin.sync_with_stdio(0);
    std::cin.tie();

    int n;
    std::cin >> n;
    std::vector<int> streams;
    for(int temp, i = 0; i < n; i++) {
        std::cin >> temp;
        streams.push_back(temp);
    }
    int command, stream, percent, oStream, nStream;
    while(1) {
        std::cin >> command;
        switch(command) {
            case 99:
                std::cin >> stream >> percent;
                oStream = streams.at(stream - 1);
                streams.erase(streams.begin() + (stream - 1));
                nStream = (int)(((100.00-(double) percent) * oStream) / 100.00);
                streams.insert(streams.begin() + stream - 1, nStream);
                streams.insert(streams.begin() + stream - 1, oStream - nStream);
                break;
            case 88:
                std::cin >> stream;
                streams.at(stream) += streams.at(stream - 1);
                streams.erase(streams.begin() + (stream - 1));
                break;
            case 77:
                for (size_t i = 0; i < streams.size(); i++) {
                    std::cout << streams.at(i) << " ";
                }
                return 0;
        }
    }
}
