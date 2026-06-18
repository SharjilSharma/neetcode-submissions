class Solution {
public:
    bool LS(vector<int> nums, int x ){
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == x){
                return true;
            }
        }
        return false;
    }


    int longestConsecutive(vector<int>& nums) {
        vector<int> max_count;
        if(nums.empty()) return 0;
        
        for(int i = 0; i< nums.size(); i++){
            int count = 1;
            int x  = nums[i];
            while(LS(nums, x+1) == true){
                count +=1;
                x = x+1;
            }
            max_count.push_back(count);
        }
        return *max_element(max_count.begin(), max_count.end());
    }
};
