//
// Created by rbcheng on 18-12-2.
// Email: rbcheng@qq.com
//
#include "queue"

int main() {
    int arr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    stdd::priority_queue<int> p_queue(arr, arr + 9);

    std::cout << "priority queue size: " << p_queue.size() << std::endl;

    for (int i = 0; i < p_queue.size(); ++i) {
        std::cout << p_queue.top() << " ";
    }
    std::cout << std::endl;

    while (!p_queue.empty()) {
        std::cout << p_queue.top() << " ";
        p_queue.pop();
    }
    std::cout << std::endl;
}