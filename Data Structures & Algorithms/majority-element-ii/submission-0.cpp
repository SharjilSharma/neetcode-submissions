class Solution {
   public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

        int cnt1 = 0;
        int cnt2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (cnt1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                cnt1=1;
            } else if (cnt2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                cnt2=1;
            }

            else if (nums[i] == el1) {
                cnt1++;
            } else if (nums[i] == el2) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        int counter1 = 0;
        int counter2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el1) {
                counter1++;
            }
            if (nums[i] == el2) {
                counter2++;
            }
        }

        if (counter1 > nums.size() / 3) {
            result.push_back(el1);
        }
        if (counter2 > nums.size() / 3) {
            result.push_back(el2);
        }

        return result;
    }
};