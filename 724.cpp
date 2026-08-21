class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int right_sum, left_sum;

        for (int i = 0; i < nums.size(); i++) {

            right_sum = 0;
            left_sum = 0;

            for (int j = 0; j < nums.size(); j++) {

                if (j == i) {
                    continue;
                }

                if (j < i) {
                    left_sum += nums[j];
                }
                else {
                    right_sum += nums[j];
                }
            }

            if (right_sum == left_sum) {
                return i;
            }
        }

        return -1;
    }
};
