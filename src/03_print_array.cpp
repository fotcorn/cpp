#include <cstddef>
#include <iostream>

template <typename V, std::size_t L> void print(const V (&array)[L]) {
    for (std::size_t i = 0; i < L; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;
}

template <typename V, std::size_t L> void print2(const V (&array)[L]) {
    std::cout << array << std::endl;
}

int main() {
    int array[] = {1, 2, 3};
    const char string[] = "Hello World";
    print(array);
    print(string);

    print2(array); // this prints the address of the array
    print2(string);
    return 0;
}
