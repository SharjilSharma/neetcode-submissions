class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int y = target - x;

            if (mpp.count(y)) {
                return { mpp[y],i  };
            } else {
                mpp[x] = i;
            }
        }
    }
};
