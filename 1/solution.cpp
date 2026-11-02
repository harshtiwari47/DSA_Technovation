class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Best o(n) : both space & time : solution using hashmap
        unordered_map<int, int> um;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (um.count(diff)) {
                return {i, um[diff]};
            }

            um[nums[i]] = i;
        }

        return {};
    }
}
