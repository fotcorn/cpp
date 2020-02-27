#include <iostream>

template <typename FirstArg>
void print(FirstArg arg) {
    std::cout << arg << std::endl;
}

template <typename FirstArg, typename... Args>
void print(FirstArg arg, Args... args) {
    std::cout << arg << ", ";
    print(args...);
}

int main() {
    print(1, "test", 3.5);
}
