class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(int i = 0; i<strs.size(); i++){
            encoded_string += to_string(strs[i].length()) + '#' + strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        int i = 0; 
        vector<string> result;
        while(i<s.length()){
            int j = s.find('#',i); //j now has 1st occurence index of #

            string len_str = s.substr(i, j-i);
            int len_strr = stoi(len_str);

            i = j+1;
            string original_word = s.substr(i,len_strr);
            result.push_back(original_word);

            i = i + len_strr;

        }
        return result;
    }
};
