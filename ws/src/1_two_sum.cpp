class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); ++i) {
            auto it = umap.find(target - nums[i]);
            if (it != umap.end()) {
                return vector<int>{it->second, i};
            }

            umap.insert({nums[i], i});
        }

        return vector<int>{};
    }
};
