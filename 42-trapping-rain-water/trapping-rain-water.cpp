class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax = 0, rightMax = 0;
        int left = 0, right = n-1;
        int ans = 0;
        while(left<right) {
            if(height[left]<height[right]) {
                if(height[left]<leftMax) {
                    ans += min(leftMax,height[right]) - height[left];
                }
                else
                    leftMax = height[left];
                left++;
            }
            else if(height[right]<height[left]) {
                if(height[right]<rightMax) {
                    ans += min(rightMax, height[left]) - height[right];
                }
                else
                    rightMax = height[right];
                right--;
            }
            else {
                leftMax = max(leftMax,height[left]);
                left++;
            }
        }
        return ans;
    }
};