#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

namespace stdlib {
template <typename T> class vector {
    std::size_t m_capacity;
    std::size_t m_size;
    T* m_data;

public:
    using size_type = std::size_t;

    vector() : m_capacity(0), m_size(0), m_data(nullptr) {
    }

    explicit vector(size_type capacity) : m_capacity(capacity), m_size(0) {
        m_data = (T*)std::malloc(capacity * sizeof(T));
    }
    void reserve(size_type reserve) {
        if (reserve <= m_capacity) {
            return;
        }
        m_capacity = reserve;
        if (m_data == nullptr) {
            m_data = (T*)std::malloc(m_capacity * sizeof(T));
        } else {
            m_data = (T*)std::realloc(m_data, m_capacity * sizeof(T));
        }
    }

    virtual ~vector() {
        if (m_data != nullptr) {
            free(m_data);
        }
    }

    size_type size() {
        return m_size;
    }

    size_type capacity() {
        return m_capacity;
    }

    void push_back(const T& value) {
        ++m_size;
        if (m_size > m_capacity) {
            if (m_capacity > 0) {
                m_capacity *= 2;
            } else {
                m_capacity = 1;
            }
            if (m_data == nullptr) {
                m_data = (T*)std::malloc(m_capacity * sizeof(T));
            } else {
                m_data = (T*)std::realloc(m_data, m_capacity * sizeof(T));
            }
        }
        m_data[m_size - 1] = value;
    }

    void pop_back() {
        if (m_size > 0) {
            --m_size;
        }
    }

    void clear() {
        m_size = 0;
    }

    bool empty() {
        return m_size == 0;
    }

    // [] operator does not do a range check
    T& operator[](size_type i) {
        return m_data[i];
    }

    const T& operator[](size_type i) const {
        return m_data[i];
    }

    T& at(size_type i) {
        if (i >= m_size) {
            throw std::out_of_range("i out of range");
        }
        return m_data[i];
    }

    const T& at(size_type i) const {
        if (i >= m_size) {
            throw std::out_of_range("i out of range");
        }
        return m_data[i];
    }
};
} // namespace stdlib

int main() {
    stdlib::vector<int> v;

    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    std::cout << v[0] << ", " << v[1] << ", " << v[2] << std::endl;
    std::cout << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << std::endl;

    return 0;
}
