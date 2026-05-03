class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> firstRowSet;
        unordered_set<char> secondRowSet;
        unordered_set<char> thirdRowSet; 
        string firstRow = "qwertyuiop";
        string secondRow = "asdfghjkl";
        string thirdRow = "zxcvbnm";

        vector<string> validWords;
        for(int i = 0; i < firstRow.length(); i++) {
            firstRowSet.insert(firstRow[i]);
        }
        for(int i = 0; i < secondRow.length(); i++) {
            secondRowSet.insert(secondRow[i]);
        }
        for(int i = 0; i < thirdRow.length(); i++) {
            thirdRowSet.insert(thirdRow[i]);
        }
        
        for(int i = 0; i < words.size(); i++) {
            const unordered_set<char>* currentSet;
            char firstLetter = tolower(words[i][0]);
            if(firstRowSet.count(firstLetter)) {
                currentSet = &firstRowSet;
            }
            else if(secondRowSet.count(firstLetter)) {
                currentSet = &secondRowSet;
            }
            else if(thirdRowSet.count(firstLetter)) {
                currentSet = &thirdRowSet;
            }
            else {
                continue;
            }
            bool skip = false;
            for(int j = 0; j < words[i].length(); j++) {
                if(!currentSet->count(tolower(words[i][j]))) {
                    skip = true;
                    break;
                }
            }
            if(!skip) {
                validWords.push_back(words[i]);
            }
        }
        return validWords;
    }
};
