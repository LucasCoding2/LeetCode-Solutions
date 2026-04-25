class Solution {
public:
    void sortColors(vector<int>& nums) {
      int first = 0;
      int mid = 0;
      int last = nums.size() - 1; 

      while(mid < nums.size() ) {
        if(nums[mid] == 0) {
            swap(nums[mid],nums[last]);
            first++;
            mid++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid],nums[last]);
            last--;
        }
      }
    }
};
