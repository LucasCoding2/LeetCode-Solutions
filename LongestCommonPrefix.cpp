class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       std::multimap<std::string, int> prefixes;
       int val = 0;
       for(int i = 0; i < strs.size(); i++) {
          for(int j = 2; j < strs[i].size(); j++) {
            val++;
             prefixes.insert({strs[i].substr(0,j),val});
          }
       } 
       
       int largestEntries = 0;
       int count = 0;
       string mostCommonPrefix = "";
       for (const auto&pair : prefixes) {
           count = prefixes.count(pair.first);
           if(count > 1 && count > largestEntries) {
               largestEntries = count;
               mostCommonPrefix = pair.first;
           }
       }
       
       return mostCommonPrefix;
    }
};
