class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pointer = 0;
        for (int i = max(0, m); i < nums1.size(); i++) {
            if (nums2.size() > 0 && pointer < nums2.size()) {
                nums1[i] = nums2[pointer];
                pointer++;
            }
        }

        sort(nums1.begin(), nums1.end());
    }
};
