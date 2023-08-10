#include <bits/stdc++.h>
// ccc00s2
int main() {
    std::cin.sync_with_stdio(0);
    std::cin.tie();

    int n;
    std::cin >> n;

    std::vector<double> flow;
    int temp;
    for(int i = 0; i < n; i++) {
        std::cin >> temp;
        flow.push_back(temp);
    }
    int input;
    std::vector<double> tempStore;
    while(true) {
        std::cin >> input;

        if(input == 99) {
            int streamNum, percent;
            std::cin >> streamNum >> percent;
            if(streamNum < flow.size()) {
                tempStore.insert(tempStore.end(), std::make_move_iterator(flow.begin() + streamNum),
                                 std::make_move_iterator(flow.end()));
                flow.erase(flow.begin() + streamNum, flow.end());
                flow.push_back(flow.at(streamNum - 1) * ((100.00 - (double) percent) / 100.00));
                flow.at(streamNum - 1) *= ((double) percent / 100.00);
                flow.insert(flow.end(), std::make_move_iterator(tempStore.begin()),
                            std::make_move_iterator(tempStore.end()));
                tempStore.erase(tempStore.begin(), tempStore.end());
            } else {
                flow.push_back(flow.at(streamNum - 1) * ((100.00 - (double) percent) / 100.00));
                flow.at(streamNum - 1) *= ((double) percent / 100.00);
            }
        } else if(input == 88) {
            int streamNum;
            std::cin >> streamNum;
            if(streamNum < flow.size()) {
                tempStore.insert(tempStore.end(), std::make_move_iterator(flow.begin() + streamNum + 1),
                                 std::make_move_iterator(flow.end()));
                flow.erase(flow.begin() + streamNum + 1, flow.end());
                flow.at(streamNum - 1) += flow.at(streamNum);
                flow.erase(flow.begin() + streamNum, flow.end());
                flow.insert(flow.end(), std::make_move_iterator(tempStore.begin()),
                            std::make_move_iterator(tempStore.end()));
                tempStore.erase(tempStore.begin(), tempStore.end());
            } else {
                flow.at(streamNum - 1) += flow.at(streamNum);
                flow.erase(flow.begin() + streamNum, flow.end());
            }

        } else if(input == 77) {
            for(size_t i = 0; i < flow.size() - 1; i++) {
                std::cout << flow.at(i) << " ";
            }
            std::cout << flow.at(flow.size() - 1) << std::endl;
            return 0;
        }
    }
}
