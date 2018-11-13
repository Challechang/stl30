//
// Created by rbcheng on 18-11-12.
// Email: rbcheng@qq.com
//

#include "vector"

int main() {
    stdd::vector<int > v(2, 9);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    stdd::vector<int>::iterator it = v.begin();
    for (auto& each: v) {
        std::cout << each << std::endl;
    }
}