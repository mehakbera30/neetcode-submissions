class Solution {
public:
    int maxArea(vector<int>& height) {
       int start = 0 , end = height.size()-1;
       int maxwater = 0;
       while(start<end){
        int width = end-start;
        int length = min(height[start],height[end]);
        maxwater = max(maxwater,length*width);
        if(height[start] < height[end]) start++;
        else end--; 
       }
       return maxwater;
    }
};
