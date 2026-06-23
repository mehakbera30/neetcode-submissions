class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0,end=n-1;
        int maxwater = 0;
        
        while(start<end){
            int width = end - start; 
        int minheight = min(height[start],height[end]);
        maxwater=max(maxwater,minheight*width);
        if(height[start]<height[end]) start++;
        else end--;
        }
       return maxwater;
       
     
    }
};
