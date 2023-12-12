#include <vector>
#include <iostream>
#include <unordered_map>

/*
    Link: https://leetcode.cn/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/description/
*/
class Solution {
public:
    int findRepeatDocument(std::vector<int>& documents) {
        int i = 0;
        while (i < documents.size()) {
            if (documents[i] == i) {
                i ++;
                continue;
            }
            if (documents[documents[i]] == documents[i]) {
                return documents[i];
            } else {
                std::swap(documents[documents[i]], documents[i]);
            }
        }
        return -1;
    }
    // int findRepeatDocument(std::vector<int>& documents) {
    //     std::unordered_map<int, bool> record{};
    //     for (int d : documents) {
    //         if (record[d]) {
    //             return d;
    //         } else {
    //             record[d] = true;
    //         }
    //     }
    //     return -1;
    // }
};

int main() {
    Solution s{};
    std::vector<int> data{2, 5, 3, 0, 5, 0};
    std::cout << s.findRepeatDocument(data) << std::endl;
    return 0;
}