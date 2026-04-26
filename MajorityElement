class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i = 0;
        int candidate = nums[i];
        i++;
        int count = 1;
        while(i < nums.size() ) {
            if(nums[i] == candidate) {
                count++;
            }
            else {
                count--;
                if(count == 0) {
                   candidate = nums[i];
                   count++;
                }
            }
            i++;
        }
    return candidate;
    }
};
