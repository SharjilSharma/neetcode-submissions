class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());


        int longest = 0;
        int count = 1;
        int last_smaller = INT_MIN;

        for(int i = 0; i< nums.size(); i++){
            if(nums[i] - 1 == last_smaller){
                count +=  1;
                last_smaller = nums[i];
            }

            else if(nums[i] != last_smaller){
                count = 1;
                last_smaller = nums[i];
            }
            longest = max(longest , count);
        }
        return longest;
        
    }
};
