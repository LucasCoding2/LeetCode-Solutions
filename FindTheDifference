class Solution {
public:
    char findTheDifference(string s, string t) {
        std::vector<int> count(26, 0);
        std::vector<int> count2(26, 0);
        for(int i = 0; i < s.length(); i++) {
            char a = s[i];
            int letter = a - 97;
            count[letter]++;
        }
        for(int i = 0; i < t.length(); i++) {
            char a = t[i];
            int letter = a - 97;
            count2[letter]++;
            if(count2[letter] > count[letter]) {
                return a;
            }
        }
        return 'a';
    }
};
