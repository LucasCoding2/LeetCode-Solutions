class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        if(needle.length() > haystack.length() ) {
            return -1;
        }
        for(int i = 0; i < haystack.length()-needle.length()+1;i++) {
            if(haystack[i] == needle[0]) {
                index = i;
            }
            int j;
            for(j = 0; j < needle.length(); j++) {
                if(haystack[i+j] != needle[j]) {
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
