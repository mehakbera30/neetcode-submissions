class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            // if previous and current element is same skip the element i we need distinct solution
            if(i-1>=0 && nums[i-1]==nums[i]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
             int sum = nums[i]+nums[j]+nums[k];
             if(sum<0) j++;
            else if(sum>0) k--;
             else{
                ans.push_back({nums[i],nums[j],nums[k]});
                
                // skip the similar j and k elements//
                int left = nums[j];
                int right = nums[k];
                while(j<k && left==nums[j]) j++;
                while(j<k && right==nums[j]) k--;
             }
            }
        }
        return ans;

        // the time complexity is o(n^2) and space complexity is o(1)
    }
};
