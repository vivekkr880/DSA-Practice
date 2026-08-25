class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxArea=0;
        int left=0;
        int right=n-1;
                while(left<right){

                int width =right-left;

                int minHeight=min(height[left],height[right]);

                int area = width*minHeight;

                maxArea=max(maxArea,area);

                if(height[left]<height[right])
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        
        return maxArea;
        
    }
};