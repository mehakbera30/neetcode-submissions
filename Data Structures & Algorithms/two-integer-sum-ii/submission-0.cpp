class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        for(int i=0;i<n;i++){
            if(nums[start]+nums[end]==target) return{nums[start],nums[end]};
            else if((nums[start]+nums[end]) > target) end--;
            else start++;
        }
        return{};
     }
};
