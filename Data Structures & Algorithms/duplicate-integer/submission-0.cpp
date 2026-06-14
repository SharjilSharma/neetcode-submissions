class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int x : nums){
            if(mpp.count(x)){
                return true;
            }
            else{
                mpp[x]++;
            }
        }
        return false;

    }
};