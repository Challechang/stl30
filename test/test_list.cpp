//
// Created by rbcheng on 18-11-13.
// Email: rbcheng@qq.com
//
#include "list"

struct Parent {
    std::string name;
    int age;

    Parent(std::string name, int age): name(name), age(age){}
};

int main() {
    stdd::list<int> m_list;
    m_list.push_back(5);
    m_list.push_back(2);
    m_list.push_back(6);
    m_list.push_back(3);
    m_list.push_back(1);
    m_list.push_back(0);
    m_list.push_back(34);
    m_list.push_back(4);
    m_list.push_back(9);

    m_list.sort();

    for (auto& each: m_list) {
        std::cout << each << std::endl;
    }

    stdd::list<int>::iterator it = m_list.begin();


    stdd::list<Parent> parent_list;
    parent_list.push_back(Parent("parent1", 55));
    parent_list.push_back(Parent("parent2", 56));
    auto parent_it = parent_list.begin();
    std::cout << parent_it->age << std::endl;

    auto diff = stdd::distance(parent_list.begin(), parent_list.end());

    std::cout << "diff: " << diff << std::endl;
}