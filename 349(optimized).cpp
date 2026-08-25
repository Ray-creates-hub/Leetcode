class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> seen;

        for (int num : nums1) {
            seen.insert(num);
        }

        vector<int> ans;

        for (int num : nums2) {
            if (seen.count(num)) {
                ans.push_back(num);
                seen.erase(num);
            }
        }

        return ans;
    }
};
