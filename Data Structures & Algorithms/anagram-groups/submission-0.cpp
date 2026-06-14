class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;
        

        // 1. sorting and storing key and vectors
        for(int i = 0; i<strs.size() ; i++){

            string s = strs[i];
            sort(s.begin(), s.end());
            mpp[s].push_back(strs[i]);
        }

        // 2. storing answer vector in its designated vector.
        // vector only needs to be of size of map.
        vector<vector<string>> result(mpp.size()); 

        int index = 0;
            
        //it will hold 1 pair of key and value o vector
        for(auto it : mpp){

            //vec will hold vector in the it iterator.
            auto vec = it.second;
            
            // now iterate in the vector and add the word to result vector.
            for(auto p : vec){
                result[index].push_back(p);
            }
            index++;
        }

        return result;

    }
};
