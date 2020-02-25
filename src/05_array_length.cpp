#include <cstddef>
#include <iostream>

template <typename V, std::size_t L> constexpr std::size_t array_length(const V (&array)[L]) {
    return L;
}

int my_random() {
    return 5;
}

int main() {
    int array[] = {1, 2, 3, 4};
    std::cout << array_length(array) << std::endl;

    // we can use array_length for compile time constants because its defined as constexpr
    int other_array[array_length(array)];
    std::cout << array_length(other_array) << std::endl;

    // int third_array[my_random()];  // does not compile because my_random is
    // not compile time constant
    return 0;
}
