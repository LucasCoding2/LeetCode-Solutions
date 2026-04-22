class Solution {
public:
    int singleNumber(vector<int>& nums) {
       std::unordered_map<int, int> numsMap;
       for(int i = 0; i < nums.size(); i++) {
           numsMap[nums[i]] += 1;
       } 
       for (const auto& [key, value] : numsMap) {
           if(value < 2) {
               return key;
           }
       }
       return -1;
    }
};
