class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs.empty()) return "";



        for(int j = 0 ; j<strs[0].length(); j++){
            char current_char = strs[0][j];

            for(int i = 1; i<strs.size(); i++){
                if(j>strs[i].length() || strs[i][j] != current_char){
                    return result;
                }
            }
            result+= current_char;
        }
        return result;
       

        
    }
};