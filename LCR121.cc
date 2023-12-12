#include <vector>
#include <iostream>

/*
    Difficulty: Medium
    Link:https://leetcode.cn/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/description/
*/
class LCR121 {
public:
    bool findTargetIn2DPlants(std::vector<std::vector<int>>& plants, int target) {
        int cur_row = plants.size() - 1;
        int cur_col = 0;
        while (cur_row >= 0 && cur_col < plants[0].size()) {
            if (plants[cur_row][cur_col] > target) {
                cur_row --;
            } else if (plants[cur_row][cur_col] < target) {
                cur_col ++;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    using vec2d = std::vector<std::vector<int>>;
    vec2d data1{{2,3,6,8}, {4,5,8,9}, {5,9,10,12}};
    vec2d data2{{1,3,5}, {2,5,7}};
    LCR121 s{};
    std::cout << s.findTargetIn2DPlants(data1, 8) << std::endl;
    std::cout << s.findTargetIn2DPlants(data2, 4) << std::endl;
    return 0;
}