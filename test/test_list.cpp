//
// Created by rbcheng on 18-11-13.
// Email: rbcheng@qq.com
//
#include "list"
int main() {
    stdd::list<int> m_list;
    m_list.push_back(1);
    m_list.push_back(2);

    for (auto& each: m_list) {
        std::cout << each << std::endl;
    }

    stdd::list<int>::iterator it = m_list.begin();

}