//
// Created by Mars on 2018/11/17.
//

#include "deque"
#include "algorithm"

int main() {
    stdd::deque<int, stdd::alloc, 32> m_deque;
    auto it = m_deque.begin();
    std::cout << it.buffer_size() << std::endl;
    std::cout << m_deque.max_size() << std::endl;
}