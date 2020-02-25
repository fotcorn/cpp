#include <iostream>

template <typename T> int compare(const T& v1, const T& v2) {
    if (v1 < v2) {
        return -1;
    }
    if (v2 < v1) {
        return 1;
    }
    return 0;
}

struct TestStruct {
    int a;

    bool operator<(const TestStruct& other) const {
        return a < other.a;
    }
};

int main() {
    std::cout << compare(1, 2) << std::endl;

    TestStruct a{5};
    TestStruct b{6};

    std::cout << compare(a, b) << std::endl;

    return 0;
}
