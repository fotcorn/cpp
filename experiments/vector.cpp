#include <iostream>
#include <vector>
int main() {
    // all results on g++ 7.4.0
    std::vector<int> vec;

    std::cout << "empty vector" << std::endl;
    std::cout << "sizeof: " << sizeof(vec) << std::endl; // 24 bytes (pointer, size, capacity)
    std::cout << "capacity: " << vec.capacity() << std::endl; // 0
    std::cout << "size: " << vec.size() << std::endl; // 0

    vec.push_back(3);
    vec.push_back(5);

    std::cout << "two elements" << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl; // 2
    std::cout << "size: " << vec.size() << std::endl; // 2

    vec.pop_back();
    vec.pop_back();
    // vec.pop_back(); // undefined behaviour, no assert/exception here, but next push_back fails

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "three elements" << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl; // 4
    std::cout << "size: " << vec.size() << std::endl; // 3

    vec.clear();
    std::cout << "cleared vector" << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl; // 4, memory is not freed on clear()
    std::cout << "size: " << vec.size() << std::endl; // 0

    return 0;
}
