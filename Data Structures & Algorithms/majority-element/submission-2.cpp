class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int result = 0;
        int max_freq = 0;

        for(auto x : nums){
            mpp[x]++;
            if(mpp[x] > max_freq){
                max_freq = mpp[x];
                result = x;
            }
        }
        return result;
    }
};