class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //map of <"abc", {"abc","cab"}>;
        unordered_map<string, vector<string>> mpp; 

        for(int i = 0; i<strs.size(); i++){
            string s = strs[i]; //act

            sort(s.begin(), s.end());
            mpp[s].push_back(strs[i]);
        }
        // for( auto i :  strs){
        //     string s = strs[i];
        //     sort(s.begin(), s.end());

        //     mpp[s].push_back(i);
        // }
        vector<vector<string>> result;

        for(auto p : mpp){
            // p.second is the entire vector<string> of grouped anagrams
            result.push_back(p.second); 
        }
        return result;
    
    }
};
