class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
        {
            return "";
        }
        string prefix = strs[0];
        for (int i = 0; i < strs.size();i++ ){
            for(int j = 0; j < prefix.length(); j++){
                if (j >= strs[i].size() || prefix[j] != strs[i][j]){
                    prefix = prefix.substr(0,j);
                    break;
                }
            }

        }
        if (prefix.empty())
        {
            return "";
        }
        return prefix;
    }
};