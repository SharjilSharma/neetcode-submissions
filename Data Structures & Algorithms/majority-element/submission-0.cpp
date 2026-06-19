class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int result = 0;

        for(auto x : nums){
            mpp[x]++;
        }
        for(auto it: mpp){
            int num = it.first;
            int freq = it.second;
            if(freq > n/2){
                result = num;
                break;
            }
        }
        return result;
    }
};