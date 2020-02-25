#include <iostream>
#include <vector>

template <typename Iterator, typename Value> Iterator find(Iterator startIt, Iterator endIt, Value value) {
    while (startIt != endIt) {
        if (*startIt == value) {
            return startIt;
        }
        startIt++;
    }
    return endIt;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    auto it = find(vec.begin(), vec.end(), 3);
    std::cout << *it << std::endl;

    it = find(vec.begin(), vec.end(), 12);
    std::cout << (it == vec.end()) << std::endl;

    return 0;
}
