class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int num = 1;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    continue;
                } else {
                    num = num * nums[j];
                }
            }
            result.push_back(num);
        }
        return result;
    }
};
