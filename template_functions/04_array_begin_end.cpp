#include <algorithm>
#include <iostream>

template <typename V, std::size_t L> const V* begin(const V (&array)[L]) {
    return array;
}

template <typename V, std::size_t L> const V* end(const V (&array)[L]) {
    return array + L;
}

int main() {
    int array[] = {1, 2, 3};

    auto start = begin(array);
    auto ending = end(array);

    std::cout << *start << std::endl << *(ending - 1) << std::endl;

    return 0;
}
