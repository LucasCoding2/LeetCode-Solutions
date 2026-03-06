class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        for(int i = 0; i < haystack.length()-needle.length();i++) {
            if(haystack[i] == needle[0]) {
                index = i;
            }
            for(int j = 0; j < needle.length(); j++) {
                if(needle[j] != haystack[i+j]) {
                    index = -1;
                }
            }
            if(index != -1) {
                return index;
            }
        }
        return index;
    }
};
