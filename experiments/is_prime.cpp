// based on C++ Template: The complete guide, chapter 8.1 Template Metaprogramming
#include <iostream>

template <unsigned int num, unsigned int divisor>
struct do_is_prime {
    static constexpr bool value = (num % divisor != 0) && do_is_prime<num, divisor - 1>::value;
};

template <unsigned int num>
struct do_is_prime<num, 2> {
    static constexpr bool value = num % 2 != 0;
};

template <unsigned int num>
struct is_prime {
    static constexpr bool value = do_is_prime<num, num / 2>::value;
};

int main() {
    std::cout << "12: " << is_prime<12>::value << std::endl;
    std::cout << "13: " << is_prime<13>::value << std::endl;
    std::cout << "7: " << is_prime<7>::value << std::endl;
    return 0;
}
