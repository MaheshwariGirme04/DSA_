#include <vector>
#include <unordered_set>

class Solution {
public:
    int missingMultiple(std::vector<int>& nums, int k) {
        std::unordered_set<int> s(nums.begin(), nums.end());
        for (int i = 1; ; ++i) {
            int x = k * i;
            if (s.find(x) == s.end()) {
                return x;
            }
        }
    }
};
