class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        priority_queue<pair<int,int>> maxHeap; 

        vector<int> result;

        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto [num,count] : mpp){
            maxHeap.push({count,num});
        }
        while(k>0 && !maxHeap.empty()){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
            k--;

        }
        return result;
    }
};
