class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      for(int i = 0; i < nums.size()-1; i++) {
        for(int j = 1; j < nums.size(); j++) {
            if(nums[i]+nums[j] == target) {
                vector<int> indices;
                indices.push_back(i);
                indices.push_back(j);
                return indices;
            }
        }
      }  
      vector<int> empty;
      return empty;
    }
};
