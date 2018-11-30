//
// Created by rbcheng on 18-11-29.
// Email: rbcheng@qq.com
//
#include "vector"
#include "stl_heap.h"
#include <iostream>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    stdd::vector<int> m_vector(a, a + 8);
    stdd::make_heap(m_vector.begin(), m_vector.end());

    for (auto& item: m_vector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    m_vector.push_back(10);
    stdd::push_heap(m_vector.begin(), m_vector.end());
    for (auto& item: m_vector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    stdd::pop_heap(m_vector.begin(), m_vector.end());
    std::cout << m_vector.back() << std::endl;
    m_vector.pop_back();
    for (auto& item: m_vector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    stdd::sort_heap(m_vector.begin(), m_vector.end());
    for (auto& item: m_vector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}