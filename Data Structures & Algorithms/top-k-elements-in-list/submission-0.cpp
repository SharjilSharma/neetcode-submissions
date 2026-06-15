class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        for (auto p : nums) {
            mpp[p]++;
        }

        vector<int> result;

        for (int i = 0; i < k; i++) {
            int CurrentMaxFreq = INT_MIN;
            int CurrentMaxElement = 0;
            for (auto p : mpp) {
                if (p.second > CurrentMaxFreq) {
                    CurrentMaxFreq = p.second;
                    CurrentMaxElement = p.first;
                }
            }
            result.push_back(CurrentMaxElement);
            mpp.erase(CurrentMaxElement);
        }
        return result;
    }
};
