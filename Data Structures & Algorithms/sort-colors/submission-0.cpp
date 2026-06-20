class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mpp; //<number, freq>;


        for(auto x : nums){
            mpp[x]++;
        }
        nums.clear();
        for(auto it : mpp){
            nums.insert(nums.end(), it.second, it.first);
        }
    }
};