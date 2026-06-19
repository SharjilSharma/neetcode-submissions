class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unordered_map<int,int> mpp;
        int count = 0; 
        for(int i= 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        nums.clear();
        for(auto it : mpp){
            if(it.first != val){
                nums.insert(nums.end(), it.second, it.first);
                count += it.second;
            }
        }
        return count;
        
    }
};