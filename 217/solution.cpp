bool containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> seen;
    
    for (int num : nums) {
        // If the number is already in the set, a duplicate exists
        if (seen.count(num)) {
            return true;
        }
        seen.insert(num);
    }
    
    return false; // All elements are distinct
}
