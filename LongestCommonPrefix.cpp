class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string longestCommonPrefix = "";
       for(int i = 1; i < strs[0].length(); i++) {
           int j = 0;
           while(j < strs.size() && strs[0].substr(0,i) == strs[j].substr(0,i) ) {
             j++;
           }
           if(j == strs.size() ) {
               longestCommonPrefix = longestCommonPrefix + strs[0][i-1];
           }      
       }
       
       return longestCommonPrefix;
    }
};
